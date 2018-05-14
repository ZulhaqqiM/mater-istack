#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool OperandFound(char C) {     // C itu char (katakter)
	
  if(C >= '0' && C <= '9' || C >= 'a' && C <= 'z' || C >= 'A' && C <= 'Z') 
return true;
		
	
  
return false;
}


bool OperatorFound(char Character){
	
if(C== '*' ||  C== '/' || C== '%' || C== '+' || C== '-')
		return true;
    
    return false;
}


int PrecedenceOperator(char Operator){
      int precedence = -1;
	      switch(Operator){
      case '(':	precedence = 4;
        break;
	  case '+':
	  case '-':	precedence = 2;
	break;
	  case '*':
	  case '/':	precedence = 3;
	break;
    case ')':	precedence = 1;
        break;
	}
	return precedence;
}


int CheckPrecedence(char Operator1, char Operator2){
	int Operator1Predence = PrecedenceOperator(Operator1);
	int Operator2Predence = PrecedenceOperator(Operator2);

	if(Operator1Predence == Operator2Predence){
		if(Operator1) return false;
		else return true;
	}
	return Operator1Predence > Operator2Predence ?  true: 
		false;
}
