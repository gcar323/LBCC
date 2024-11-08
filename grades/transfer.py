class Option():
    def __init__(self, name):
        self.name = name
        self.transfer_creds = 0
        self.transferable_courses = []

def check_credits(option):
    planned_classes = ["HIST 10", "POLSC 1", "MATH 60", "ENGL 1", "CS 11", "COMM 60", "BIOL 1", "MATH 70", "CS 51", "CS 61", "PHYS 3A", "ENGL 4", "MATH 80", "CS 12", "CS 22", "PHYS 80", "arts/ arthum"]
    
    #if option.name == "UCLA":

def colleges():
    options = ["UCLA", "UC BERKELEY", "CSULB", "USC", "UCSD", "SDSU", "CPP", " CSU SLO", "UCSB", "UCI"]

'''    for option in options:
        if option
'''


"""------------------------------------------------------------------------------------------------"""
extras = ["arts", "arts/ humanities", "social behvioral sciences", "language", "PHYS 3C", "MATH 84"]
"""------------------------------------------------------------------------------------------------"""

def nums():
    sem = ["F23", "S24", "SUMMER 24", "W25", "F24", "S25"]

    planned_classes = [["HIST 10", "POLSC 1"], 
                       ["SOCIO 1", "CS 11", "COMM 60"],
                       ["MATH 60", "CS 12", "PHYS 3A", "BIOL 41"],
                       ["MATH 70", "CS 51", "PHYS 3B", "ENGL 1H", "ART 1H", "LEARN 11H"], 
                       ["MATH 80"],
                       ["MATH 84", "CS 22", "PHYS 3C", "ENGL 3H", "CS 61", "ETHST 1H"]]

    # Fall 23 = 6 units
    # Spring 24 = 9 units
    # Summer 24 = 11 units, plus 5.5 units from PCC
    # Fall 24 = 18 units, plus 4.5 units from PCC
    # Winter 25 = 5 units
    # Spring 25 = 18 units, plus 4.5 from PCC
    
    """
    Fall 24   ***[][3] is going to add ETHST 1H, if I possibly get off the waitlist*** // I might consider taking a regular ETHST 1
    Winter 25 ***[][4] is going to consider either STAT 1 or PSYCH 1, as I want to plan to take either class (offered in Spring 25) at the honors level***
    Spring 25 ***[][5] is going to add either STAT 1H or PSYCH 1H, depending on which of the two is offered as an honors course, along with PHIL 22 OR ENGR 17, whichever of the two that can fit into my schedule***
    // ENGR 17 is 4 units
    // STAT 1H is 4 units
    Summer 25 ***[][6] is going to be the last stretch, which NEEDS PSYCH 2, and whichever courses are leftover (courses I didn't take in Spring 25)***
    // PSYCH 2 is 4 units

    planned_classes_initial = 
                       [["HIST 10", "POLSC 1"], 
                       ["SOCIO 1", "CS 11", "COMM 60"],
                       ["MATH 60", "CS 12", "PHYS 3A", "BIOL 41"],
                       ["MATH 70", "CS 51", "PHYS 3B", "ENGL 1H", "ART 1H", "LEARN 11H", "ETHST 1H"], 
                       ["MATH 80", "STAT 1/ PSYCH 1"],
                       ["MATH 84", "CS 22", "PHYS 3C", "ENGL 3H", "CS 61", "STAT 1H/ PSYCH 1H", "ENGR 17/ PHIL 22"],
                       ["PSYCH 2", "ETHST 1/ PHIL 22/ ENGR 17"]]

    # (5.1.24)
    planned_classes = 
                       [["HIST 10", "POLSC 1"], 
                       ["SOCIO 1", "CS 11", "COMM 60"],
                       ["MATH 60", "CS 12", "PHYS 3A", "BIOL 41"],+
                       ["MATH 70", "PHYS 3B", "ENGL 1H", "ART 1H", "LEARN 11H", "STAT 1", "PHIL 22"], 
                       ["MATH 80", "PSYCH 1/ ETHST 1"],
                       ["MATH 84", "PHYS 3C", "ENGL 3H", "CS 61", "CS 51", "CS 22", "ENGR 17", "ETHST 1H/ PSYCH 1H"],
                       ["PSYCH 2", "ETHST 1"]]

    # Fall 23 = 6 units
    # Spring 24 = 9 units
    # Summer 24 = 11 units, plus 5.5 units from PCC
    # Fall 24 = 20 units
    # Winter 25 = 5 units, plus 4.5 from PCC
    # Spring 25 = 21.5 units 
    # Summer 25 = 7/8 units


    # (5.22.24)
    planned_classes = 
                        [["HIST 10", "POLSC 1"], 
                        ["SOCIO 1", "CS 11", "COMM 60"],
                        ["MATH 60", "CS 12", "MUSIC 40H", "BIOL 011",
                        ["MATH 70", "PHYS 3A", "ENGL 1H", "LEARN 11H", "CS 51"], 
                        ["MATH 80", "PHYS 3B"],
                        ["MATH 84", "PHYS 3C", "ENGL 3H", "CS 22", "ETHST 1H"], 
                        ["PHYS 3C"]]

    # (6.26.24)
    planned_classes = 
                        [["HIST 10", "POLSC 1"], 
                        ["SOCIO 1", "CS 11", "COMM 60"],
                        ["MATH 60", "MUSIC 40H"] ,
                        ["MATH 70", "PHYS 3A", "ENGL 1H", "LEARN 11H", "CS 51", "CS 12", "COUNS 1"],  // PHYS 008A
                        ["MATH 80", "PHYS 3B"], // CS 12 || PHYS 008B
                        ["MATH 84", "PHYS 3C", "ENGL 3H", "CS 22", "ETHST 1H"],  // CS 12 || PHYS 008C
                        ["PHYS 3C"]] // CS 12?
    # try to squeeze in CS 61 


    # (7.15.24)
    planned_classes = 
                f23        [["HIST 10", "POLSC 1"], 
                s24        ["SOCIO 1", "CS 11", "COMM 60"],
                S24        ["MATH 60", "MUSIC 40H"] ,
                f24        ["MATH 70", "ENGL 1H", "LEARN 11H", "CS 12", "CS 51"]  // PHYS 008A
                w25        ["MATH 80"], // PHYS 008B
                s25        ["MATH 84", "ENGL 3H", "CS 22", "ETHST 1H", "BIOL 41"]]  // PHYS 008C 

    # Fall 23 = 6 units
    # Spring 24 = 9 units
    # Summer 24 = 11 units, 3 units from PCC 
    # Fall 24 = 19.5 units
    # Winter 25 = 5 units, plus 4.5 from PCC
    # Spring 25 = 21.5 units 

    # 100.5 units in less than 2 years WTFFF

    these extra classes can help me get a degree in cognitive science, another field of interest :p


    STAT 1 (winter 2025)

    These courses will fulfill my transfer apps to (recheck to see which majors require the additiona PHIL 22 and/or ENGR 17 courses):
    - CSULB       (CompSci)
    - UC Berkeley (CompSci/EE, Aero)
    - UCI         (CompSci Engineering, CompE, CompSci, SWE)
    - UCLA        (CompSci Engineering, CompE, CompSci, Linguistics and Computer Science, EE), possible Statistics and Data Science
    - UCSD        (CompSci [refers to CSE] , CompE [refers to both CSE and ECE], Mathematics/CompSci)
    - UCSB        (CompSci, CompE)
    - SDSU        (CompE, EE, CompSci)
    - UCR         (Neuroscience, Computer Science, Data Science, Electrical Engineering)
    - USC         (good with current course plan made in 5.22.24) 
    - Stanford    
    - CalTech
    - CMU
    - MIT


    """

    total_classes = 0
    for a in range(len(planned_classes)):
        for b in range(len(planned_classes[a])):
            total_classes += 1

    return total_classes    

def main():
    option_obj = []
    options = ["UCLA", "UC BERKELEY", "UCD", "CSULA", "CSULB", "USC", "UCSD", "SDSU", "CPP", " CSU SLO", "CSU HUMBOLDT", "UCSB"]
    for option in options:
        option_obj.append(Option(option))
    
    print(option_obj[0].name)


if __name__ == "__main__":
    main()