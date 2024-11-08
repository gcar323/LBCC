class S2023():    
    def cecs225():
        homework_list = [1, .5, 0, .93, 0, 0]
        quizzes_list = [30/40, 1, 1] 
        midterm1_list = [25/30]
        midterm2_list = [25/40]
        final_list = [37/40] # --> assumed final grade, since it was never released

        tot1 = 0
        for element in homework_list:
            tot1 += element

        tot2 = 0
        for element in quizzes_list:
            tot2 += element

        tot3 = 0
        for element in midterm1_list:
            tot3 += element

        tot4 = 0
        for element in midterm2_list:
            tot4 += element

        tot5 = 0
        for element in final_list:
            tot5 += element  


        tot1 /= len(homework_list)
        tot2 /= len(quizzes_list)
        tot3 /= len(midterm1_list)
        tot4 /= len(midterm2_list)
        tot5 /= len(final_list) 
        homework = 5 * tot1
        quizzes = 10 * tot2
        midterm1 = 25 * tot3
        midterm2 = 25 * tot4
        final =  35 * tot5
        return (homework + final + quizzes + midterm1 + midterm2)

    def cecs228():
        syllabus_list = [1,1] 
        quizzes_list = [6/8 , 6/8 , 4/8] 
        homework_list = [1 , .615 , .6, .89] 
        beforezy_list = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1] 
        afterzy_list = [1, 1, 0, 1, .0577, 1, 1, 1, 1, 1, 1, .0606] 
        final_list = [0]


        tot1 = 0
        for element in syllabus_list:
            tot1 += element

        tot2 = 0
        for element in final_list:
            tot2 += element

        tot3 = 0
        for element in quizzes_list:
            tot3 += element

        tot4 = 0
        for element in homework_list:
            tot4 += element

        tot5 = 0
        for element in beforezy_list:
            tot5 += element

        tot6 = 0
        for element in afterzy_list:
            tot6 += element

        tot1 /= len(syllabus_list)
        tot2 /= len(final_list)
        tot3 /= len(quizzes_list)
        tot4 /= len(homework_list)
        tot5 /= len(beforezy_list)
        tot6 /= len(afterzy_list)

        syllabus = 2 * tot1
        final = 23 * tot2
        quizzes = 27 * tot3
        homework = 24 * tot4
        beforezy = 12 * tot5
        afterzy = 12 * tot6

        # find grade for B (80%)
        # START
        grades = [syllabus, quizzes, homework, beforezy, afterzy, final]
        f_final = 80

        for percentage in grades:
            f_final -= percentage
        final = f_final        
        # f_final == 0.880508695652174
        # END

        return (syllabus + final + quizzes + homework + beforezy + afterzy)

    def cecs274():
        quiz_list = [1, .25, .9, 1, 1, 1, 1]
        project_list = [.375, 0, 1.0, 1.0, 1.0, 1.0, 1.0] 
        lab_list = [1, 17/32, 21/30, 1, 1, 18/22, 21/25, 1] 
        final_list = [11.38/20] 

        tot1 = 0
        for element in quiz_list:
            tot1 += element

        tot2 = 0
        for element in project_list:
            tot2 += element

        tot3 = 0
        for element in lab_list:
            tot3 += element

        tot4 = 0
        for element in final_list:
            tot4 += element

        tot1 /= len(quiz_list)
        tot2 /= len(project_list)
        tot3 /= len(lab_list)
        tot4 /= len(final_list)

        quizzes = 25 * tot1
        projects = (40 * tot2) # adding 5% of a total of 40% is just adding 2% to your total
        projects += (.4 * 5)
        labs = 15 * tot3
        final = 20 * tot4
        return (final + quizzes + projects + labs)

    def cecs277():
        lab_list = [1, 1, 1, 1, .8, .8, 1, 1, 1, .6, 1, 1, 1, 1] 
        quizzes_list = [1, .9, .9, .9, 1, 1, 1, 1, 1, 1, 1, 1] 
        midterm_list = [37/50] 
        final_list = [53.5/75] 

        tot1 = 0
        for element in lab_list:
            tot1 += element

        tot2 = 0
        for element in final_list:
            tot2 += element

        tot3 = 0
        for element in quizzes_list:
            tot3 += element

        tot4 = 0
        for element in midterm_list:
            tot4 += element


        tot1 /= len(lab_list)
        tot2 /= len(final_list)
        tot3 /= len(quizzes_list)
        tot4 /= len(midterm_list)
        labassignments = 50 * tot1
        final = 20 * tot2
        quizzes = 15 * tot3
        midterm = 15 * tot4

        return (labassignments + final + quizzes + midterm)

    def math123():
        web1_list = [.7, .9405, 1, .9487, 1, .9432]
        web2_list = [.5333, 0, 0, 0, 0, .66] 
        web3_list = [1, .5579, 0, 0, 0, .6, 0] 
        web4_list = [0, 0, .0741, 0, .9796, 1] 
        syw_list = [1, 0, 0, 7/8, 1, 1, 0, 1, 1, 1] 
        cm_list = [1, 1, 1, 1] 
        midterm_list = [.87, .73, .77] 
        final_list = [.77]


        tot1 = 0
        for element in web1_list:
            tot1 += element

        tot2 = 0
        for element in web2_list:
            tot2 += element

        tot3 = 0
        for element in web3_list:
            tot3 += element

        tot4 = 0
        for element in cm_list:
            tot4 += element

        tot5 = 0
        for element in syw_list:
            tot5 += element

        tot6 = 0
        for element in midterm_list:
            tot6 += element
            
        tot9 = 0
        for element in final_list:
            tot9 += element

        tot10 = 0
        for element in web4_list:
            tot10 += element

        tot1 /= len(web1_list)
        tot2 /= len(web2_list)
        tot3 /= len(web3_list)
        tot4 /= len(cm_list)
        tot5 /= len(syw_list)
        tot6 /= len(midterm_list)
        tot9 /= len(final_list)
        tot10 /= len(web4_list)

        web1 = 6.25 * tot1
        web2 = 6.25 * tot2
        web3 = 6.25 * tot3
        web4 = 6.25 * tot10
        course_maintanence = 10 * tot4
        syw = 15 * tot5
        midterms = 30 * tot6
        final = 20 * tot9
        return (final + midterms + syw + course_maintanence + web1 + web2 + web3 + web4)





    '''
    semester1 = (((4*1) + (0*3) + (3*3) + (2*3)) / (40))
    semester2 = (((2*1) + (3*3) + (4*1) + (2*4) + (2*3)) / 48)
    semester3 = ((((3*3) /12)))
    semester4 = (((3 * 3) + (4 * 4) + (4 * 3) + (3 * 3) + (3 * 3))/ 64)
    print(semester4)
    print((semester1 + semester2 + semester3 + semester4))
    '''


    
    dig_lgk_assembly = float(f"{cecs225():.2f}")
    disc_math = float(f"{cecs228():.2f}")
    data_structures = float(f"{cecs274():.2f}")
    obj_ori_app = float(f"{cecs277():.2f}")
    calc2 = float(f"{math123():.2f}")
    
    percents = [dig_lgk_assembly, disc_math, data_structures, obj_ori_app, calc2]
    letters = []

    for float in percents:
        if float >= 90:
            letters.append('A')
        elif float >= 80:
            letters.append('B')
        elif float >= 70:
            letters.append('C')
        elif float >= 60:
            letters.append('D')

    # 
    classes = [[3], [3], [3], [3], [3]]



    
    print(f'CECS 225: {dig_lgk_assembly} \tThis is a {letters[0]}.')
    print(f'CECS 228: {disc_math} \t\tThis is a {letters[1]}.')
    print(f'CECS 274: {data_structures} \tThis is a {letters[2]}.')
    print(f'CECS 277: {obj_ori_app} \tThis is a {letters[3]}.')
    print(f'MATH 123: {calc2} \tThis is a {letters[4]}.')
    

