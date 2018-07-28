# CST276SRS02  

Date Validation Strategy/Template Method  

Name: AJ Stacher  

---
Issues:  


Notes:  - Strategy Design Pattern used in DateI18N and GoDStrategy Projects
		- Template Method Design Pattern used in GoFTemplateMethod Project
		- Code in IDateValidators derived classes uses all or some (modified) code from Besser, slide 14 of "Strategy" google doc

		Enum vs. Strategy:
		-Using Enums you have to know what each enum means/refers to; with Strategy, Client has instances of Interface derived classes to refer to.
		-Using Enums is messy, cant easily extend each behavior/function in class, have to extend the entire validator class to do so; with Strategy you can derive another 
		 and change its behavior, Context takes care of delegating to it according to client.
		-Strategy allows you to extend Context and still be able to interact with any IDateValidator.
		-Strategy works better for team development; someone can develop the Context and someone else can write and extend the IDateValidator Interface.
		-Strategy needs to have client instantiate each type of strategy, Enum all functions are comtained within the class

		Template Mehthod vs. Strategy:
		In the end I saw that I could have also implemented the Template Method. Most of the code in each derived class of IDateValidator was duplicate. I could have
		broken up the part of the code where it checks for delimiters into its own function that could have been defined differently in each extension of 
		IDateValidator, with the majority of the is_good() and all of days_in_month() defined in the abstract class of the Template method. 

		This would still be a trade off however, if I wanted to change any other behavior in the future outside of the delimitor check code I would have had
		to create a whole new abstract class.

###

