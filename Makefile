########################################################################
####################### Makefile Template ##############################
########################################################################
# Student settings
NAME = Alexis Rodriguez
SID = 1002101428
EMAIL = axr1428@mavs.uta.edu
SEMESTER = FALL2023
 

####### DO NOT EDIT BELOW THIS LINE!!! #########
author: 
	@echo $(NAME)
	@echo $(SID)
	@echo $(EMAIL)
	@echo $(SEMESTER)
submit:
	zip -r submission_$(NAME)_$(SID).zip .
install:
	pip install python-benedict	
