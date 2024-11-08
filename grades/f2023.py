def add(assignments):
    tot = 0
    for element in assignments:
        tot += element
    return tot
    
def divide(total, assignments):
    total /= len(assignments)
    return total

class S2023():    

    def cecs325():
        x = input("Systems Programming:\nDo you want to see your current grade? ")
        if (x == "Y") or (x == "y") or (x == "Yes") or (x == "yes") or (x == "yEs"): 
            programs_list = [10, 0, 0, 20, 0]   # adds up to 120
            quizzes_list = [10, 0, 10, 20]      # adds up to 120
            test_list = [81]                    # adds up to 200
            current_total = 260
        else:
            programs_list = [10, 10, 5, 20, 10, 20, 20]   # adds up to 120
            quizzes_list =  [10, 0, 10, 20, 20, 20]   # adds up to 120
            test_list = [81, 100]                         # adds up to 200
            current_total = 440

        tot1 = add(programs_list)
        tot2 = add(quizzes_list)
        tot3 = add(test_list)
        assignments = [tot1 , tot2, tot3]
        total = add(assignments) 
        print('\n')
        return (total / current_total) * 100
    
    def engl():
        x = input("English\nDo you want to see your current grade? ")
        if (x == "Y") or (x == "y") or (x == "Yes") or (x == "yes") or (x == "yEs"): 
            participation_list = [1]      # 15%            
            miniP_list = [.5, .75]        # 16%
            portfolioP_list = [.5, .5]    # 60%
            x = input("Current journals? ")
            if (x == "Y") or (x == "y") or (x == "Yes") or (x == "yes") or (x == "yEs"): 
                journals_list = [1, 0, 0, 0, 0, 0, 0, 0, 0, 0] # 10%
            else: 
                journals_list = [1]
        else:
            participation_list = [1]                       # 15%            
            miniP_list = [.5, .75, .75, .75]               # 16%
            portfolioP_list = [1, 1, 1]                    # 60%
            journals_list = [1, 1, 1, 1, 1, 1, 1, 1, 1, 1] # 10%

        tot1 = divide(add(participation_list), participation_list)
        tot2 = divide(add(miniP_list), miniP_list)
        tot3 = divide(add(portfolioP_list), portfolioP_list)
        tot4 = divide(add(journals_list), journals_list)

        participation = tot1 * 15        
        miniP = tot2 * 15
        portfolioP = tot3 * 60
        journals = tot4 * 10
        print('\n')
        return (participation + miniP + portfolioP + journals)

    def phys151():
        x = input("Physics\nDo you want to see your current grade? ")
        if (x == "Y") or (x == "y") or (x == "Yes") or (x == "yes") or (x == "yEs"): 
            midterm1_list =  [5/21]                                                # 15% 
            midterm2_list =  [0]                                                   # 15%            
            final_list =     [0]                                                   # 20%
            webassign_list = [10/14, 17/18, 20/29, 36/40, 1, 1, 40/55, 43/45]      # 20%
            labs_list =      [.85, 1, 1, 1, 19/20, 1, 1]                                 # 25%
            polls_list =     [1, 0, 0, 1, 1, 1, 1, 1]                              # 5%
        else:
            midterm1_list =  [5/21]                                                               # 15% 
            midterm2_list =  [1.4]                                                                # 15%            
            final_list =     [1]                                                                  # 20%
            webassign_list = [10/14, 17/18, 20/29, 36/40, 1, 1, 40/55, 43/45, 1, 1, 1, 1, 1]      # 20%
            labs_list =      [.85, 1, 1, 1, 19/20, 1, 1, 1, 1, 1, 1, 1]                           # 25%
            polls_list =     [1, 0, 0, 1, 1, 1, 1, 1]                                             # 5%

        tot1 = divide(add(midterm1_list), midterm1_list)
        tot2 = divide(add(midterm2_list), midterm2_list)
        tot3 = divide(add(final_list), final_list)
        tot4 = divide(add(webassign_list), webassign_list)
        tot5 = divide(add(labs_list), labs_list)
        tot6 = divide(add(polls_list), polls_list)

        midterm1 = tot1 * 15        
        midterm2 = tot2 * 15
        final = tot3 * 20
        webassign = tot4 * 20
        labs = tot5 * 25
        polls = tot6 * 5
        print('\n')
        return (midterm1 + midterm2 + final + polls + webassign + labs)


    def cecs328():
        x = input("Algorithms\nDo you want to see your current grade? ")
        if (x == "Y") or (x == "y") or (x == "Yes") or (x == "yes") or (x == "yEs"): 
            quizzes_list =  [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]                                                # 15% 
            participation_list =  [1]                                                               
            final_list =          [0]                                                   
        else:
            quizzes_list =  [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]                                                # 15% 
            participation_list =  [1]                                                              
            final_list =          [.6]                                                   

        tot1 = divide(add(quizzes_list), quizzes_list)
        tot2 = divide(add(participation_list), participation_list)
        tot3 = divide(add(final_list), final_list)

        quizzes = tot1 * 65    
        participation = tot2 * 10
        final = tot3 * 25
        print('\n')
        return (quizzes + participation + final )

    def cecs341():
        x = input("Computer Architecure\nDo you want to see your current grade? ")
        if (x == "Y") or (x == "y") or (x == "Yes") or (x == "yes") or (x == "yEs"): 
            assignments =  [4.93/5, 1, 0, 0]                                              
            quizzes_list = [0, 0, 0, 0]                                                              
            midterm_list = [12.5/25]                                                   
            final_list = [0]      
            project_list = [2.8/3, 2, 0, 0]                                 
        else:
            assignments =  [4.93/5, 1, 1, 1]                                                 
            quizzes_list = [0, 1, 1, 1]                                                               
            midterm_list = [12.5/25]                                                   
            final_list = [1]      
            project_list = [2.8/3, 2, 1, 1]                                 

        tot1 = divide(add(assignments), assignments)
        tot2 = divide(add(quizzes_list), quizzes_list)
        tot3 = divide(add(midterm_list), midterm_list)
        tot4 = divide(add(final_list), final_list)
        tot5 = divide(add(project_list), project_list)

        zybooks = tot1 * 20       
        quizzes = tot2 * 10
        midterm = tot3 * 25
        final = tot4 * 30
        projects = tot5 * 15
        print('\n')
        return (midterm + quizzes + final + zybooks + projects)

    def history():
        x = input("Physics\nDo you want to see your current grade? ")
        if (x == "Y") or (x == "y") or (x == "Yes") or (x == "yes") or (x == "yEs"): 
            quizzes_list =  [5/21]                                                # 15% 
            midterm_list =  [0]                                                   # 15%            
            final_list =     [0]                                                   # 20%
        else:
            quizzes_list =  [5/21]                                                # 15% 
            midterm_list =  [0]                                                   # 15%            
            final_list =     [0]                                                   # 20%
            
    def polsci():
        x = input("Computer Architecure\nDo you want to see your current grade? ")
        if (x == "Y") or (x == "y") or (x == "Yes") or (x == "yes") or (x == "yEs"): 
            pearson_list = [0]
            quizzes_list =  [5/21]                                                # 15% 
            final_list =     [0]                                                   # 20%
        else:
            pearson_list = [0]
            quizzes_list =  [5/21]                                                # 15% 
            final_list =     [0]                                                   # 20%

        tot1 = divide(add(pearson_list), pearson_list)
        tot2 = add(quizzes_list)
        tot3 = add(final_list)

        pearson = tot1 * 20       
        quizzes = tot2 * 10
        final = tot3 * 25
        print('\n')
        return (pearson + quizzes + final)


    system_prog = float(f"{cecs325():.2f}")
    algorithms = float(f"{cecs328():.2f}")
    comp_arch = float(f"{cecs341():.2f}")
    english = float(f"{engl():.2f}")
    phys = float(f"{phys151():.2f}")
    hist = float(f"{history():.2f}")
    polsc1 = float(f"{polsci():.2f}")
    percents = [0]
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

    classes = [[3], [3], [3], [3], [3]]



    print('\n')
    print(f'CECS 325:  {system_prog}')
    print(f'CECS 328:  {algorithms}')
    print(f'CECS 341:  {comp_arch}')
    print(f'ENGL 100B: {english}')
    print(f'PHYS 151:  {phys}')
    print(f'HIST 10:   {hist}')
    print(f'POLSC 1:   {polsc1}')
