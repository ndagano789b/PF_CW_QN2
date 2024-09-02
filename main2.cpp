#include <iostream>

using namespace std;

int main()
{//first of all i have to declare my variables
int numer;
   char answ;

//by using x1B[3m is like i am ordering to my computer to put the following text in italic and to bold it
std::cout<<"\x1B[3m The user's responses to the program are shown in bold italics. This program is designed to exhibit the positive\x1B[0m\n";
std::cout<<"\x1B[3mdivisors of positive integers supplied by you.The program will repeatedly prompt you to enter a positive integer.\x1B[0m\n";
std::cout<<"\x1B[3mthe time you enter a positive integer, the program will print all the divisors of your integer in a column and \x1B[0m \n";
std::cout<<"\x1B[3m in decreasing  order.\x1B[0m"<<endl;

 do{cout<<"Please enter a positive integer: ";//by using do while we will do the following things before the exit condition is met

   cin>>numer;//here i say let the user enter the number that he wants
for(int x=numer;x>=1;--x){//here i am dealing with any number that he could enter by saying>
if(numer%x==0)/*number divided by the number in the interval of 1 to the number itself the 
remainder is 0 just display the divisor*/
{
    std::cout<<x<<"\n";
}}//fr dd number
for(int p=numer;p<=1;p++){ //this one look for the odd number
 if(numer%2!=0){// and we say if number divided by x the remainder is different to 0 just display the number and 1
     std::cout<<numer;

}}

do{//if the number entered is less than 0 keep repeating this until the user enter a positive integer
if(numer<=0){
    std::cout<<numer<<" is not a positive integer. \n";
    std::cout<<"Please enter a positive integer: ";
    cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}//fr dd number
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;

}}
}
}//this is the end of our second do concerning negative integers
while(numer<=0);//keep repeating that when the number entered is greater than 0
std::cout<<"Would you like to see the divisors of another integer (Y/N)? ";
       cin>>answ;
       if(answ=='n'||answ=='N')
	   {std::cout<<"******Terminate*****"; break;}//if the user enter n or N just break the program if not continue
else if(answ=='y'|| answ=='Y'){cout<<"Please enter a positive integer: ";
//if answer is yes just continue to do what we did above
cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}//fr dd number
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;
     }}

do{
if(numer<=0){
    std::cout<<numer<<" is not a positive integer. \n";
    std::cout<<"Please enter a positive integer: ";
    cin>>numer;
for(int x=numer;x>=1;--x){
if(numer%x==0)
{
    std::cout<<x<<"\n";
}}//fr dd number
for(int p=numer;p<=1;p++){
 if(numer%2!=0){
     std::cout<<numer;

}}
} 

}while(numer<=0);
std::cout<<"Would you like to see the divisors of another integer (Y/N)? ";
       cin>>answ;

}//the end of our if statement when answer is y or Y
if((answ!='n'||answ!='N')|| (answ!='y'||answ!='Y'))//when the answer is different with y or n display this
         {std::cout<<" Please respond with Y (or y) for yes and N (or n) for no. \n";
       std::cout<<"Would you like to see the divisors of another integer (Y/N)? ";

 cin>>answ;
       if(answ=='n'||answ=='N'){std::cout<<"******Terminate*****"; break;}// if the user type n just break the program
 }
 //statement





}while((answ=='y'|| answ=='Y')||(answ!='n'||answ!='N'));//the exit condition of our first do

       }




