import time


def findoperation(stmt, op, label):
    switcher={">":bgt,"<":blt,">=":bge,"<=":ble,"==":beq,"!=":bne}
    func=switcher.get(op)
    sav=func(stmt,op,label)
    return sav
def bgt(stmt, op, label):
        cmp = "BGT "+label
        print(cmp)
        time.sleep(0.02)
        stmt.append(cmp)
        return stmt
def blt(stmt, op, label):
        cmp = "BLT "+label
        print(cmp)
        time.sleep(0.02)
        stmt.append(cmp)
        return stmt

def bge(stmt, op, label):
        cmp = "BGE "+label
        print(cmp)
        time.sleep(0.02)
        stmt.append(cmp)
        return stmt

def ble(stmt, op, label):
        cmp = "BLE "+label
        print(cmp)
        time.sleep(0.02)
        stmt.append(cmp)
        return stmt
def beq(stmt, op, label):
        cmp = "BEQ "+label
        print(cmp)
        time.sleep(0.02)
        stmt.append(cmp)
        return stmt

def bne(stmt, op, label):
        cmp = "BNE "+label
        print(cmp)
        time.sleep(0.02)
        stmt.append(cmp)
        return stmt


def loadvariable(stmt, regval, value,con):

    if(con==1):
        lstmt = "MOV "+"R"+str(regval)+"," + "#" + value
        stmt.append(lstmt)
        print(lstmt)
        time.sleep(0.02)
        r1 = regval
        regval = (regval + 1)%13
        return stmt, regval, r1

    if(con==0):
        st1 = "MOV "+"R" + str(regval) + ","+"="+str(value)
        r1 = regval
        regval = (regval + 1)%13
                
        print(st1)
        time.sleep(0.02)
        stmt.append(st1)
    
        st2 = "MOV "+"R" + str(regval) +","+ "[R" + str(r1) + "]"
        stmt.append(st2)
        print(st2)
        time.sleep(0.02)
        r2 = regval
        regval = (regval + 1)%13
        return stmt, regval, r1, r2
def binaryoperation(stmt, lhs, arg1, op, arg2):
    if(op == "+"):
        st = "ADD "+"R"+str(lhs)+","+"R"+str(arg1)+",R"+str(arg2)
        print(st)
        time.sleep(0.02)
        stmt.append(st)
        
    elif(op == "-"):
        st = "SUBS "+"R"+str(lhs)+","+"R"+str(arg1)+",R"+str(arg2)
        print(st)
        time.sleep(0.02)
        stmt.append(st)        
        
    elif(op == "*"):
        st = "MUL "+"R"+str(lhs)+","+"R"+str(arg1)+",R"+str(arg2)
        print(st)
        time.sleep(0.02)
        stmt.append(st)        
        
    elif(op == "/"):
        st = "SDIV "+"R"+str(lhs)+","+"R"+str(arg1)+",R"+str(arg2)
        print(st)
        time.sleep(0.02)
        stmt.append(st)   
    return stmt
    
def genAssembly(lines, file):
    vardec = []
    stmt = []
    varlist = []
    regval = 0
    for i in lines:
        i = i.strip("\n")
        
        if(len(i.split()) == 2):
            if(i.split()[0] == "GOTO"):
                st = "B " + i.split()[1]
                print(st)
                time.sleep(0.02)
                stmt.append(st)
            else:
                st = i
                print(st)
                time.sleep(0.02)
                stmt.append(st)
        if(len(i.split()) == 5):
            lhs, ass, arg1, op, arg2 = i.split()
            if(arg1.isdigit() and arg2.isdigit()):
                
                stmt, regval, r1 = loadvariable(stmt, regval, arg1,1)
                stmt, regval, r2 = loadvariable(stmt, regval, arg2,1)
                stmt, regval, r3, r4 = loadvariable(stmt, regval, lhs,0)
                stmt = binaryoperation(stmt, r4, r1, op, r2)
                st = "STR R"+str(r4) + ", [R" + str(r3) + "]"
                print(st)
                time.sleep(0.02)
                stmt.append(st)
                
            elif(arg1.isdigit()):
                stmt, regval, r1 = loadvariable(stmt, regval, arg1,1)
                stmt, regval, r2, r3 = loadvariable(stmt, regval, arg2,0)
                stmt, regval, r4, r5 = loadvariable(stmt, regval, lhs,0)
                stmt = binaryoperation(stmt, r5, r1, op, r3)
                st = "STR R"+str(r5) + ", [R" + str(r4) + "]"
                print(st)
                time.sleep(0.02)
                stmt.append(st)
                #STR Op
            elif(arg2.isdigit()):
                stmt, regval, r1,r2 = loadvariable(stmt, regval, arg1,0)
                stmt, regval, r3 = loadvariable(stmt, regval, arg2,1)
                stmt, regval, r4, r5 = loadvariable(stmt, regval, lhs,0)
                stmt = binaryoperation(stmt, r5, r2, op, r3)
                st = "STR R"+str(r5) + ", [R" + str(r4) + "]"
                print(st)
                time.sleep(0.02)
                stmt.append(st)                
            else:
                stmt, regval, r1,r2 = loadvariable(stmt, regval, arg1,0)
                stmt, regval, r3,r4 = loadvariable(stmt, regval, arg2,0)
                stmt, regval, r5,r6 = loadvariable(stmt, regval, lhs,0)
                stmt = binaryoperation(stmt, r6, r2, op, r4)
                st = "STR R"+str(r6) + ", [R" + str(r5) + "]"
                print(st)
                time.sleep(0.02)
                stmt.append(st)
                
        if(len(i.split()) == 4):
            
            condition = i.split()[1]
            label = i.split()[3]
            flag = 0
            lhs = ""
            rhs = ""
            operator = [">", "<", ">=", "<=", "=", "!"]
            op = ""
            for j in condition:
                if(j in operator):
                    op = op + j
                    flag = 1
                    continue
                if(j == "="):
                    op = op + j
                    continue
                if(flag == 0):
                    lhs += j
                else:
                    rhs+=j
            
            if(rhs.isdigit() and lhs.isdigit()):
                stmt, regval, r1 = loadvariable(stmt, regval, lhs,1)
                stmt, regval, r2 = loadvariable(stmt, regval, rhs,1)
                cmp = "CMP R"+str(r1)+", "+"R"+str(r2)
                print(cmp)
                time.sleep(0.02)
                stmt.append(cmp)
                stmt = findoperation(stmt, op, label)
                
            elif(lhs.isdigit()):
                stmt, regval, r1 = loadvariable(stmt, regval, lhs,1)
                stmt, regval, r2, r3 = loadvariable(stmt, regval, rhs,0)
                
                st4 = "CMP " + "R"+str(r1) + "," + "R" + str(r3)
                print(st4)
                time.sleep(0.02)
                stmt.append(st4)
                stmt = findoperation(stmt, op, label)
            elif(rhs.isdigit()):
                stmt, regval, r1, r2 = loadvariable(stmt, regval, lhs,0)
                stmt, regval, r3 = loadvariable(stmt, regval, rhs,1)
                st4 = "CMP " + "R"+str(r2) + "," + "R" + str(r3)
                print(st4)
                time.sleep(0.02)
                stmt.append(st4)
                stmt = findoperation(stmt, op, label)
            else:
                stmt, regval, r1, r2 = loadvariable(stmt, regval, lhs,0)
                stmt, regval, r3, r4 = loadvariable(stmt, regval, rhs,0)
                
                st4 = "CMP " + "R"+str(r2) + "," + "R" + str(r4)
                print(st4)
                time.sleep(0.02)
                stmt.append(st4)
                stmt = findoperation(stmt, op, label)
                    
                
            
        if(len(i.split()) == 3):
            variable = i.split()[0]
            value = i.split()[2]
            variable = str(variable)
            if(value.isdigit()):
                if variable not in varlist:
                    out = ""
                    out = out + variable + ":" + " .WORD " + str(value)
                    print(out)
                    time.sleep(0.02)
                    vardec.append(out)
                    varlist.append(variable)
                else:
                    stmt, regval, r1, r2 = loadvariable(stmt, regval, variable,0)
                    stmt, regval, r3 = loadvariable(stmt, regval, value,1)
                    st = "STR R"+str(r3)+", [R" + str(r1) + "]"
                    print(st)
                    time.sleep(0.02)
                    stmt.append(st)
            else:
                stmt, regval, r1, r2 = loadvariable(stmt, regval, variable,0)
                stmt, regval, r3,r4 = loadvariable(stmt, regval, value,0)
                st = "STR R"+str(r4)+", [R" + str(r1) + "]"
                print(st)
                time.sleep(0.02)
                stmt.append(st)
    return vardec, stmt
                
                
            
def writeassembly(stmt, vardec, File):
    File.write(".text\n")
    for i in stmt:
        time.sleep(0.001)
        File.write("%s\n"%(i))
    File.write("SWI 0x011\n")
    File.write(".DATA\n")
    for i in vardec:
        
        time.sleep(0.01)
        File.write("%s\n"%(i))
    
    print("Written to File")

fin = open("while.txt", "r")
fout = open("Assembly-new1.s", "w")

lines = fin.readlines()
print("------------------------------------------------------------------------- ")
vardec, stmt = genAssembly(lines, fout)
print("------------------------------------------------------------------------- ")
writeassembly(stmt, vardec, fout)
fin.close()
fout.close()
fin.close()
fout.close()
