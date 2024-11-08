import math

def letter(grade):
    grades = ['F', 'D', 'C', 'B', 'A']
    for i in range(len(grades)):
        if grades[i] == grade:
            if grades[i] == 'D':
                return 0
            else:
                return i

def letters(list):
    sum = 0
    for i in range(len(list)):
        sum += list[i]
    return sum

def semesterGPA(grades, uniter):
    unit = []
    unit_count = 0
    for index in range(len(uniter)):
        unit.append((uniter[index][1]))
        unit_count += uniter[index][1]
    
    for index in range(len(grades)):
        grades[index] *= unit[index]
    
    sum = 0
    for i in range(len(grades)):
        sum += grades[i] 
    return sum
        
# current GPA = 2.098

def main ():
    # [name of course, units, letter grade]
    fall21 = [  ["AFRS 119" , 3, 'C'] , 
                ["CECS 100" , 3, 'B'] ,
                ["ENGL 100B", 3, 'F'] ,
                ["ENGR 100" , 1, 'A'] ,
                ["MATH 122" , 4, 'F'] , 
                ["THEA 113" , 3, 'B'] ]
    
    spring22 = [["CECS 105" , 1, 'C'] , 
                ["CECS 174" , 3, 'D'] ,
                ["COMM 130" , 3, 'B'] ,
                ["ENGR 102" , 1, 'A'] ,
                ["MATH 122" , 4, 'C'] , 
                ["PHIL 101" , 3, 'C'] ]
    
    fall22 = [  ["ASAM 100B" , 3, 'F'] , 
                ["CECS 174"  , 3, 'B'] ,
                ["CECS 225"  , 3, 'F'] ,
                ["MATH 123"  , 4, 'D'] ,
                ["PHYS 151"  , 4, 'F'] ]
    
    spring23 = [["CECS 225" , 3, 'B'] , 
                ["CECS 228" , 3, 'B'] ,
                ["CECS 274" , 3, 'C'] ,
                ["CECS 277" , 3, 'B'] ,
                ["MATH 123" , 4, 'C'] ]

    fall23 = [  ["CECS 325"  , 3, 'C'] , 
                ["CECS 328"  , 3, 'A'] ,
                ["CECS 341"  , 3, 'B'] ,
                ["ENGL 100B" , 3, 'C'] ,
                ["PHYS 151"  , 4, 'B'] ,
                ["HIST 10"   , 3, 'A'] , 
                ["POLSC 1"   , 3, 'A'] ]
    
    f21_list = []
    for index in range(len(fall21)):
        f21_list.append(letter(fall21[index][2]))
    f21_gpa = semesterGPA(f21_list, fall21)
    f21 = f21_gpa/(17-4)

    print("Term - Fall 21 GPA:" , float(f"{f21:.3f}"))

    s22_list = []
    for index in range(len(spring22)):
        s22_list.append(letter(spring22[index][2]))
    s22_gpa = semesterGPA(s22_list, spring22)
    s22 = s22_gpa/(15-3)
    print("Term - Spring 22 GPA:" , float(f"{s22:.3f}"))

    f22_list = []
    for index in range(len(fall22)):
        f22_list.append(letter(fall22[index][2]))
    f22_gpa = semesterGPA(f22_list, fall22)
    f22 = f22_gpa/(17-7)
    print("Term - Fall 22 GPA:" , float(f"{f22:.3f}"))

    s23_list = []
    for index in range(len(spring23)):
        s23_list.append(letter(spring23[index][2]))
    s23_gpa = semesterGPA(s23_list, spring23)
    s23 = s23_gpa/(16)
    print("Term - Spring 23 GPA:" , float(f"{s23:.3f}"))

    f23_list = []
    for index in range(len(fall23)):
        f23_list.append(letter(fall23[index][2]))
    f23_gpa = semesterGPA(f23_list, fall23)
    f23 = f23_gpa/(22)
    print("Term - Fall 23 GPA:" , float(f"{f23:.3f}"))



    current_sum = letters(f21_list) + letters(s22_list) + letters(f22_list) + letters(s23_list) + letters(f23_list) - 3
    print(f"{current_sum/(13 + 12 + 6 + 16 + 22):.3f}")

#float(f"{-----():.2f}")

main()