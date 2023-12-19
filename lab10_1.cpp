#include<iostream>
#include<string>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0},i = 1,sum; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit. \n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade;
		 //The loop must be terminated when grade = '0'
		if(grade == 'A'){ // if grade is A
			count[0] += 1;
			i++;}
		else if(grade == 'B'){ // if grade is B
			count[1] += 1;//Do something//and so on ... for grade = C, D, F	
			i++;}
		else if(grade == 'C'){
			count[2] += 1;
			i++;}
		else if(grade == 'D'){
			count[3] += 1;
			i++;}
		else if(grade == 'F'){
			count[4] += 1;
			i++;}
		else if(grade == '0') 
			break;
		else{
			cout << "Wrong input. Please input again. \n";}
	}while(grade != '0');
	sum = count[0]+count[1]+count[2]+count[3]+count[4];
	cout << "In total "<< sum << " students. \n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
