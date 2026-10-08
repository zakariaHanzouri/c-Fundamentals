#include <iostream>
#include <cmath>
using namespace std;

// struct Address{

//        string country;
//        string city;
//        string street;
// };

// struct Owner {

//        string fullName;
//        string phone;
//        Address address;

// };

// struct Car {

//        string mark;
//        string model;
//        int year;
//        Owner owner;

// };

// enum Week {
//        Mon,
//        Tus,
//        Wed,
//        Thu,
//        Fri,
//        Sat,
//        Sun
// };

// enum Colors{
//        Red,
//        Green,
//        Blue,
//        Grey,
// };

// enum enColors{

//        Red,Green,Blue,Purple,Brown,Pink
// };

// enum enGender {
//        Male,Female
// };

// enum enMaritalStatus{

//        Married,Single
// };

// struct stAddress{

//        string country;
//        string city;
//        string street;
//        string zipCode;
// };

// struct stContactInfo{

//        string phone;
//        string email;
//        stAddress address;
// };

// struct stPerson{

//        string firstName;
//        string lastName;

//        stContactInfo contactInfo;

//        enColors favColor;
//        enGender gender;
//        enMaritalStatus maritalStatus;

// };

#include <string>

// void sumByProcedural(){

//        int num1,num2,result;

//        cout << "Please enter the number 1: ";
//        cin>> num1;
//        cout << "Please enter the number 2: ";
//        cin>> num2;

//        result= num1+num2;

//        cout << "********************"<< endl;
//        cout << result << endl;

// }

// float sumByFunction (){

//        float num1,num2,result;

//        cout << "Please enter the number 1: ";
//        cin>> num1;
//        cout << "Please enter the number 2: ";
//        cin>> num2;

//        return num1+num2;

// }

// void mylocalxinfunction(){
//        int x = 10;

//        cout << "The value of x inside the function is : " << x << endl;
// }

// int x = 30;

// void  testFunction(int num){

//        num = 7000;

//        cout << "The value of num became: "<< num << endl;
// }

// void doubleValue(int &num){

//        num *= 2;

// }

// void swapNumbers(int &a,int& b){

//        int temp;

//        temp= a;
//        a=b;
//        b=temp;

// }

// struct stPersonInfo{

//        string fName;
//        string lName;
//        int age;
//        string phone;

// };

// void readPersonInfo(stPersonInfo &stPerInfo){

//        cout << "Please enter your first name: ";
//        cin >> stPerInfo.fName;

//        cout << "Please enter your last name: ";
//        cin >> stPerInfo.lName;

//        cout << "Please enter your age : ";
//        cin >> stPerInfo.age;

//        cout << "Please enter your phone number: ";
//        cin >> stPerInfo.phone;

// }

// void printPersonInfo (stPersonInfo stPerInfo ){

//        cout << "*****************************" << endl;
//        cout << "First name: " << stPerInfo.fName << endl;
//        cout << "Last name: " << stPerInfo.lName << endl;
//        cout << "Age : " << stPerInfo.age << endl;
//        cout << "Phone number: " << stPerInfo.phone << endl;
//        cout << "*****************************" << endl;

// }

// void readGradeData(int numbers[3]){

//        cout << "PLEASE ENTER GRADE 1: ";
//        cin >> numbers[0];
//        cout << "PLEASE ENTER GRADE 2: ";
//        cin >> numbers[1];
//        cout << "PLEASE ENTER GRADE 3: ";
//        cin >> numbers[2];

// }

// void printAverage(int numbers[3]){

//        cout << "The average of grades is : " << (numbers[0]+ numbers[1]+numbers[2]) / 3 << endl;

// }

struct stPersonInfo
{
       string fName;
       string lName;
       int age;
       string phone;
};

void readPersonInfo(stPersonInfo &personInfo)
{
       cout << "Enter your first name: ";
       cin >> personInfo.fName;

       cout << "Enter your last name: ";
       cin >> personInfo.lName;

       cout << "Enter your age: ";
       cin >> personInfo.age;

       cout << "Enter your phone: ";
       cin >> personInfo.phone;
}

void printPersonInfo(stPersonInfo personInfo)
{
       cout << "*********************" << endl;
       cout << "First Name: " << personInfo.fName << endl;
       cout << "Last Name: " << personInfo.lName << endl;
       cout << "Age: " << personInfo.age << endl;
       cout << "Phone: " << personInfo.phone << endl;
}

void readNumberOfPersons(int &length)
{
       cout << "How many people do you have?(1-100): ";
       cin >> length;
}

void readPersons(stPersonInfo persons[100], int length)
{

       for (int i = 0; i < length; i++)
       {
              readPersonInfo(persons[i]);
       }
}

void printPersons(stPersonInfo persons[100], int length)
{

       for (int i = 0; i < length; i++)
       {
              printPersonInfo(persons[i]);
       }
}

enum enScreenColor
{
       red = 1,
       green = 2,
       yellow = 3,
       blue = 4
};

enum enWeekDay
{
       mon = 1,
       tus,
       wed,
       thu,
       fri,
       sat,
       sun
};

void showMenu()
{
       cout << "************************" << endl;
       cout << "       Week Days        " << endl;
       cout << "************************" << endl;
       cout << "1: Sunday" << endl;
       cout << "2: Monday" << endl;
       cout << "3: Tuesday" << endl;
       cout << "4: Wednesday" << endl;
       cout << "5: Thursday" << endl;
       cout << "6: Friday" << endl;
       cout << "7: Saturday" << endl;
       cout << "************************" << endl;
       cout << "Please enter the number of day: ";
}

enWeekDay readWeekDay()
{
       int wd;
       cin >> wd;
       return (enWeekDay)wd;
}

string GetWeekDayName(enWeekDay wd)
{
       switch (wd)
       {
       case enWeekDay::mon:
              return "Monday";
              break;
       case enWeekDay::tus:
              return "Tusday";
              break;
       case enWeekDay::wed:
              return "Wednesday";
              break;
       case enWeekDay::thu:
              return "Thursday";
              break;
       case enWeekDay::fri:
              return "Friday";
              break;
       case enWeekDay::sat:
              return "Saturday";
              break;
       case enWeekDay::sun:
              return "Sunday";
              break;
       default:
              return "NOT a day";
              break;
       }
}

void readArrayData(int arr[100], int &length)
{
       cout << "Enter the number of grades you have (1-100): ";
       cin >> length;

       for (int i = 0; i < length; i++)
       {
              cout << "Enter grade " << i + 1 << ": " << endl;
              cin >> arr[i];
       }
}

void printArrayData(int arr[100], int length)
{

       for (int i = 0; i < length; i++)
       {
              cout << "Number [" << (i + 1) << "] : " << arr[i] << endl;
       }
}

int calculateArraySum(int arr[100], int length)
{
       int sum = 0;
       for (int i = 0; i < length; i++)
       {
              sum += arr[i];
       }
       return sum;
}

float calculateArrayAvg(int arr[100], int length)
{

       return (float)calculateArraySum(arr, length) / length;
}

void readIntNmBetweenRange(int from, int to)
{
       int number;

       do
       {
              cout << "Please enter a number from " << from << " to " << to << ": ";
              cin >> number;
       } while (number < from || number > to);
       cout << "number in range " << from << " - " << to << " is " << number << endl;
}



void printName(string name){

       cout << "Your name is : "<< name;

}

string readName(){
       string name;
       cout << "Please enter your name: ";
       getline(cin,name);
       return name;

}


enum enNumberType{
       Odd=1,
       Even
};

int readNumber(){
       int num;
       cout << "Enter a number: ";
       cin >> num;
       return num;
}

enNumberType checkNumberType(int num){
       int result = num%2;

       if (result == 0)
       {
              return enNumberType::Even;
       }else{
              return enNumberType::Odd;
       }
       
}
void printNumberType(enNumberType numberType ){

       if (numberType == enNumberType::Even)
       {
              cout <<"Your number is Even";
       }
       else
       {
              cout <<"Your number is Odd";
              
       }
       
}


struct stInfo{
       int age;
       bool HasDrivingLicense;
       bool HasRecommendation;
};

stInfo readInfo(){

       stInfo info;

       cout << "How old are you: ";
       cin >> info.age;

       cout << "Do you have a driving license: ";
       cin >> info.HasDrivingLicense;
       
       cout << "Do you have recommendation: ";
       cin >> info.HasRecommendation;

       return info;

}

bool IsAccepted(stInfo info){
       if (info.HasRecommendation)
       {
              return true;
       }else{

              return (info.age > 21 && info.HasDrivingLicense);
       }
       
}

void printResult(stInfo info){

       if (IsAccepted(info))
       {
              cout << "Hired!!";
       }
       else
       {
              cout << "Rejected!!!";
       }
       

}


struct stFullName{
       string firstName;
       string lastName;
};

stFullName readFullName(){
       stFullName fullName;

       cout << "Enter your first name: ";
       cin >> fullName.firstName;

       cout << "Enter your last name: ";
       cin >> fullName.lastName;

       return fullName;
}

string GetFullName(stFullName fullName,bool reversed){

       if (reversed)
              return fullName.lastName + " " + fullName.firstName; 
       else 
              return fullName.firstName + " " + fullName.lastName; 
       
}

void printFullName(string formatFullName){
       cout << "Your Name is " << formatFullName;
}


float CalculateHalfNumber(int num){
       return  (float) num/2;
}

void printResults(int num){

       string result;
       result= "Half of "+ to_string(num) +" is "+to_string(CalculateHalfNumber(num));
       cout << result << endl; 

}


enum enPassFail {
       Pass=1,
       Fail
};

int readMark(){
       int mark;
       cout << "Enter your mark: ";
       cin >> mark;
       return mark;
}

enPassFail checkMark(int mark){
       if (mark>50)
       {
              return enPassFail::Pass;
       }
       else
       {
              return enPassFail::Fail;
       }
       
}

void printResultsMark(int mark){
       if (checkMark(mark) == enPassFail::Pass )
       {
              cout << "Pass";
       }else{
              cout << "Fail";
       }

       
}


void readNumbers(int &num1,int &num2, int &num3){

       cout << "Enter number 1: ";
       cin >> num1;
       cout << "Enter number 2: ";
       cin >> num2;
       cout << "Enter number 3: ";
       cin >> num3;

}

int sumOf3Numbers(int num1,int num2, int num3){

       return   (num1+num2+num3);
}


float calculateAverage(int num1,int num2,int num3){

       return (float) sumOf3Numbers(num1,num2,num3)/3;
}

void printSum(float total){
       cout << "Sum : " << total;
}


void readNumbers2(float& num1, float& num2,float& num3){

       cout << "Enter number 1: ";
       cin >> num1;
       cout << "Enter number 2: ";
       cin >> num2;
       cout << "Enter number 3: ";
       cin >> num3;

}

int maxOf2Numbers(int num1, int num2, int num3){
       if(num1>num2 && num1>num3)
              return num1;
       else if(num2>num1 && num2>num3)
              return num2;
       else
              return num3;       
}

void printMaxNum(int max){
       cout << "Maw number is : "<< max;
}


void read2Numbers(float& num1, float& num2){
       cout << "Enter number 1: ";
       cin >> num1;
       cout << "Enter number 2: ";
       cin >> num2; 
}

void swap2Numbers(int& num1, int& num2){

       int temp;

       temp= num1;
       num1=num2;
       num2= temp;

}

void printNums(int num1, int num2){
       cout << "Number 1: "<< num1<< endl;
       cout << "Number 2: "<< num2<< endl;
}

int readANumber(){
       int number;
       cout << "Enter number : ";
       cin >> number;
       return number;
       
}

float calculateRectangleArea(float a, float b){
       return (a/2)*b;
}

float circleArea(float a, float b, float c){
       const float PI= M_PI;

       float p = (a+b+c)/2;

       float mainPart = (a*b*c)/(4*sqrt(p*(p-a)*(p-b)*(p-c)));

       float area = PI * pow(mainPart,2);

       return area;


      

}

void printRecArea(float area){
       cout << "Rectangle area is: "<< area;
}


int readAge(){
       int age ;

       cout << "Enter an age: ";
       cin >> age;
       return age;
}

bool validatingAgeInRange(int age, int from , int to){

       return (age >= from && age <= to );

}


int ReadUntilAgeBetween(int from, int to){
       int age;

       do{
              age = readAge();
       }while(! validatingAgeInRange(age,from,to) );

       return age;
}

void printAgeResult(int age){
       // if (validatingAgeInRange(age, from, to))
       // {
       //        cout << age<<" is a validated age!!!0";
       // }
       // else
       // {
       //        cout << age<<" is NOT a validated age!!!";
              
       // }
       cout << "age: " << age;
       
}


void printNumbersTo(int to){
       for(int i = to ; i >= 1 ; i--){
              cout << "number: "<< i << endl;
       }

       // int i = to;
       // while(i>=1){
       //        cout << "Number: "<< i << endl;
       //        i--;
       // }

       // int i =to;
       // do{
       //        cout << "Number: "<< i << endl;
       //        i--;
       // }while(i>=1);

       cout << "End;";
}

enum enOddOrEven{
       odd=1,
       even
};

enOddOrEven checkOddOrEven(int number){
       if(number % 2 != 0){
              return enOddOrEven::odd;
       }else{
              return enOddOrEven::even;
       }
}

int sumOddNumberTo(int to){
       int total=0;
       for(int i=1; i <= to; i++){
             if (checkOddOrEven(i)== enOddOrEven::even)
             {
              total +=i;
             }
             
              
       }
       return total;
}

void printTotalOddNums(int total){
       cout << "Total odd numbers is: "<< total;
}


int factorialNumber(int number){
       int total=1;
       for (int i = number; i >=1 ; i--)
       {
              total *= i;
       }
       return total;
       
}

int readPositiveNumber(string msg){
       int num;

       do{
              cout << msg << endl;
              cin >> num;
       }while(num<0);

       return num;
}

int power(int number, int power){

       if (power==0)
       {
              return 1;
       }
       

       int total=number;
       for (int i = 1; i < power; i++)
       {
              total *= number; 
       }
       return total;
       
}

int readAPower(){
       int power;
       cout << "Enter the power: ";
       cin>> power;
       return power;
}

enum degrees{
       A=1,
       B,
       C,
       D,
       E,
       F
};

degrees CheckDegree(int mark){
       
       if (mark >= 90 && mark<100 )
       {
              return degrees::A;
       }
       else if (mark >= 80 && mark<89 )
       {
              return degrees::B;
       }
       else if (mark >=70   && mark<79 )
       {
              return degrees::C;
       }
       else if (mark >=60   && mark<69 )
       {
              return degrees::D;
       }
       else if (mark >=50   && mark<59 )
       {
              return degrees::E;
       }
       else
       {
              return degrees::F;
       }
       
}

void printDegree(degrees dg){
       switch (dg)
       {
       case degrees::A:
              cout << "A";
              break;
       case degrees::B :
              cout << "B";
              break;
       case degrees::C:
              cout << "C";
              break;
       case degrees::D:
              cout << "A";
              break;
       case degrees::E:
              cout << "A";
              break;
       case degrees::F:
              cout << "F";
              break;
       
       default:
              break;
       }
      
}



float readTotalSales(){
       float totalSales;
       cout << "Enter total sales: ";
       cin>> totalSales;
       return totalSales;
}

float getPercentage(int totalSales){
       if (totalSales>1000000)
       {
              return totalSales*0.01;
       }
       else if (totalSales>5000000 )
       {
              return totalSales*0.02;
       }
       else if (totalSales>100000 )
       {
              return totalSales*0.03;
       }
       else if (totalSales>50000)
       {
              return totalSales*0.05;
       }
       else
       {
              return 0;
       }
       
}

void printPercentage(float percentage){
              cout << "Percentage: "<< percentage;
       }


struct stMoneyTypes{

       float pennies, nickles, dimes, quarters, dollars;

};

stMoneyTypes readMoney(stMoneyTypes& stMoneyTypes){

       cout << "Enter how much pennies you have: ";
       cin >> stMoneyTypes.pennies;

       cout << "Enter how much nickles you have: ";
       cin >> stMoneyTypes.nickles;

       cout << "Enter how much dimes you have: ";
       cin >> stMoneyTypes.dimes;

       cout << "Enter how much quarters you have: ";
       cin >> stMoneyTypes.quarters;

       cout << "Enter how much dollars you have: ";
       cin >> stMoneyTypes.dollars;

       return stMoneyTypes;

}


float allMoneyToPennis(stMoneyTypes stMoneyTypes){
       float pennis=0;

       pennis+= stMoneyTypes.pennies;
       pennis+= stMoneyTypes.nickles * 5;
       pennis += stMoneyTypes.dimes * 10 ;
       pennis += stMoneyTypes.quarters * 25;
       pennis += stMoneyTypes.dollars * 100;

       return pennis;

}
float pennisToDollars(float pennis){
       return pennis / 100;
}

void printMoney(int pennis , float dollars ){
       cout << "Pennis: "<< pennis << endl;
       cout << "Dollars: "<< (float) dollars << endl;
}


enum enOperationType{
       Add='+',
       Subtract='-',
       Division='/',
       Multiply='*'
};

float readNumberr(string msg){
       float num=0;
       cout << msg << endl;
       cin>> num;
       return num;
}

enOperationType readOperator(){
       char op ='+';

       cout << "Enter an operator: "<< endl;
       cin >> op;
       return (enOperationType) op;
}


float calculator(float num1, float num2, enOperationType op){

       switch (op)
       {
       case enOperationType::Add:
              return num1 + num2;

       case enOperationType::Subtract:
              return num1 - num2;

       case enOperationType::Multiply:
              return num1 * num2;

       case enOperationType::Division:
              return num1 / num2;
       default:
              return num1 + num2;
       }
}


void sumUntil99(){
       float total=0;
       float num=0;
       int counter=1;
       do
       {
              total += num;
              num= readNumberr("enter a number: " + to_string(counter));
              counter++;
       } while (num != -99);

       cout << "Total= "<< total;
       
}

enum enPrimeNotPrime{
       Prime,
       NotPrime
};

float readPositiveNumber2(string msg){

       float num;
       do
       {
              cout << msg ;
              cin >> num;
       } while (num<0);
       
       return num;
}

enPrimeNotPrime CheckNumber(int number){

       int M = round(number / 2);

       for (int counter = 2; counter < M; counter++)
       {

              if (number % counter == 0)
              {
                    return enPrimeNotPrime::NotPrime;
              }
              
       }
       return enPrimeNotPrime::Prime;
       
}

float totalBillAfterServiceAndTax(float totalBill){

       totalBill *= 1.1;
       totalBill *= 1.16;
       return totalBill;

}

void printNumberType(int number){

       if (CheckNumber(number) == enPrimeNotPrime::Prime)
       {
            cout  << "Prime";
       }else{
              cout  << "NOT Prime";

       }
       
}

float HoursToDays(float numberOfHours){
       return numberOfHours / 24;
}

float HoursToWeeks(float numberOfHours){
       return numberOfHours / 24 /7;
}

float DaysToWeeks(float numberOfDays){
       return numberOfDays / 7;
}


struct timesType{
       float seconds,minutes,hours,days;
};
void readTime(timesType& timesType){

    
       timesType.days= readPositiveNumber2("Enter Days: ");
       timesType.hours= readPositiveNumber2("Enter hours: ");
       timesType.minutes= readPositiveNumber2("Enter minutes: ");
       timesType.seconds= readPositiveNumber2("Enter seconds: ");

      

       

}

float ConvertAllToSeconds(timesType timesType){

       float seconds=0;

       seconds += timesType.seconds;
       seconds += timesType.minutes * 60;
       seconds += timesType.hours * 60 *60;
       seconds += timesType.days * 24 * 60 *60;

       return seconds;

}


timesType ConvertSecondsToAllTypes(int seconds){

       timesType timesType;
       float remainder=0;

       timesType.days = floor(seconds / (24*60*60) );
       remainder =  seconds % (24*60*60) ;

       timesType.hours =floor( remainder / (60*60));
       remainder =  seconds % (60*60) ;

       timesType.minutes =floor( remainder / 60);
       remainder =  seconds % (60) ;

       timesType.seconds= floor(remainder);

       return timesType;


}

enum enMonthsOfYear{
       Jan=1,Fab,Mar,April,May,Jun,Jul,Aug,Sept,Oct,Nov,Dec
};

int readNumberInRange(string msg, int from, int to){

       int num=0;

       do
       {
              cout << msg << endl;
              cin >> num;
       } while (num<from && num >to);
       
       return num;

}


enMonthsOfYear readMonthOfYear(){

       return (enMonthsOfYear) readNumberInRange("Enter a number of week: ",1,7);

}


string getMonthOfYear(enMonthsOfYear Month){

       switch (Month)
       {
       case enMonthsOfYear::Jan:
             return "January";
       case enMonthsOfYear::Fab:
             return "Fabruary";
       case enMonthsOfYear::Mar:
             return "March";
       case enMonthsOfYear::April:
             return "April";
       case enMonthsOfYear::May:
             return "May";
       case enMonthsOfYear::Jun:
             return "June";
       case enMonthsOfYear::Jul:
             return "July";
       case enMonthsOfYear::Aug:
             return "August";
       case enMonthsOfYear::Sept:
             return "September";
       case enMonthsOfYear::Oct:
             return "October";
       case enMonthsOfYear::Nov:
             return "November";
       case enMonthsOfYear::Dec:
             return "December";
       
       default:
            return  "Not A Month";
       }

}


void printCapitalLettersFromAtoZ(){
       for (int i = 65; i <= 90; i++)
       {
              cout << char(i) << endl;
       }
       
}



void getLoanAmount(int& loanAmount){

       cout << "Enter The loan amount: ";
       cin >> loanAmount;
}
void getMonthsToSettleTheLoan(int& months){

       cout << "Enter how many months to settle the loan: ";
       cin >> months;
}

int getMonthlyPayment(int loanAmount, int months){
       return loanAmount/ months ;
}

string readPinCode(){

       string pin;
       
        cout <<"Enter PIN: "<<endl;
        cin >> pin;

        return pin;

}

bool login(){

       string pin;
       int counter=3;
       do
       {
              pin = readPinCode();
              
              if (pin == "1234")
              {
                     return 1;
              }
              else
              {
                      counter--;
                     cout << "Wrong ping"<< counter<< endl;
               }
               
       } while ((pin != "1234" && counter > 0) );
       
       return 0;

}

int main()
{

       if (login())
       {
              cout << "Your Balance: "<<7500;
       }else
       {
              cout << "**********You card blocked************"<<endl;
       }
       
       

       // int loanAmount ,months;

       // getLoanAmount(loanAmount);
       // getMonthsToSettleTheLoan(months);
       // cout << "it will take : " << getMonthlyPayment(loanAmount,months) <<" $";


       // printCapitalLettersFromAtoZ();

       // cout << "Day: " << getMonthOfYear(readMonthOfYear());

       // timesType time;
       // int seconds = readPositiveNumber2("Enter seconds: ");
       // time= ConvertSecondsToAllTypes(seconds);

       // cout << time.days << ':' << time.hours << ':' << time.minutes <<':' << time.seconds;

       // timesType time;

       // readTime(time);
       // cout << "Seconds: "<<ConvertAllToSeconds(time);



       // float hours= readPositiveNumber2("Enter how many hours you spent: ");

       // cout << "Days: "<< HoursToDays(hours) << endl;
       // cout << "Weeks: "<< HoursToWeeks(hours) << endl;
       // cout << "Weeks: "<< DaysToWeeks(HoursToDays(hours)) << endl;


       // float totalBill = readPositiveNumber2("Enter total bill: ");
       // cout << "Total: " <<totalBillAfterServiceAndTax(totalBill);


       // printNumberType(readPositiveNumber2("Enter a positive number: "));

       // sumUntil99();

       // float num1 = readNumberr("Enter first number: ");
       // float num2 = readNumberr("Enter second number: ");

       // enOperationType op = readOperator();

       // cout << "Result= " << calculator(num1,num2,op)<< endl;

       // stMoneyTypes stMoneyTypes;
       // float pennis;
       // float dollars;

       // readMoney(stMoneyTypes);

       // pennis = allMoneyToPennis(stMoneyTypes);
       // dollars = pennisToDollars(pennis);
       // printMoney(pennis,dollars); 

       // printPercentage(getPercentage(readTotalSales()));

       // printDegree(CheckDegree(readMark()));


      
       
       // cout << power(readANumber(),readAPower());


//       cout << power(readANumber(),2)<< endl;
//       cout << power(readANumber(),3)<< endl;
//       cout << power(readANumber(),4);

       // printTotalOddNums(factorialNumber(readPositiveNumber("Enter a positive number: ")));


       // printNumbersTo(readANumber());

       // printAgeResult(ReadUntilAgeBetween(18,45));
       
//       float a,b,c;
//       readNumbers2(a,b,c);
//        printRecArea(circleArea(a,b,c));

       // int num1, num2;
       // read2Numbers(num1,num2);
       // printNums(num1, num2);
       // swap2Numbers(num1, num2);
       // printNums(num1, num2);

//        int num1,num2,num3;
//       readNumbers2(num1,num2,num3);
//        printMaxNum(maxOf2Numbers(num1,num2,num3));


       // printResultsMark(readMark());

       // printResults(readNumber());


       // printFullName(GetFullName(readFullName(),true));
       

       // printResult(readInfo());

       // printNumberType(checkNumberType(readNumber()));

       // printName(readName());

       // int number;

       // int sum = 0;

       // for (int i = 0; i < 5; i++)
       // {
       //        cout << "enter number " << i + 1 << " : ";
       //        cin >> number;
       //        if (number > 50)
       //        {
       //               continue;
       //        }

       //        sum += number;
       // }

       // cout << sum;

       // readIntNmBetweenRange(1,10);

       // int numbers[10]={10,40,654,24,21,14,55,20,99,45};

       // for (int i =0;i< 10 ; i ++){
       //        if (numbers[i]==20)
       //        {
       //               cout << "We found it at position "<< i ;
       //               break;
       //        }

       // }

       // int number;

       // cout << "Enter a positive number: ";
       // cin >> number;

       // while (number<0)
       // {
       //        cout << "Please enter a positive one: ";
       //        cin>>number;
       // }

       // cout << "Positive number: "<< number;

       // int i = 0;

       // while (i <=5){
       //        cout << i << endl;
       //        i++;
       // }

       // int grades[100] , length=0;

       // readArrayData(grades,length);

       // printArrayData(grades,length);

       // cout << "Sum: "<< calculateArraySum(grades,length)<< endl;
       // cout << "Avg: "<< calculateArrayAvg(grades,length);

       // for (int i =0 ; i <=10 ; i++){
       //        cout << i << endl;
       // }

       // showMenu();
       // cout << "Today is: " + GetWeekDayName(readWeekDay());

       // int c;
       // enScreenColor color;

       // cout << "************************\n";

       // cout << "1- Red\n";
       // cout << "2- Green\n";
       // cout << "3- Yellow\n";
       // cout << "4- Blue\n";
       // cout << "Enter your choice:\n";
       // cin >> c;

       // color = (enScreenColor) c;

       // if (color == enScreenColor::red)
       // {
       //        system("color 4F");
       //        cout << enScreenColor::red;
       // }else if (color == enScreenColor::blue){
       //        system("color 1F");
       //        cout << color;
       // }
       // else if (color == enScreenColor::yellow){
       //        system("color 6F");
       //        cout << color;
       // }
       // else if (color == enScreenColor::green){
       //        system("color 2F");
       //        cout << color;
       // }
       // else{
       //        system("color 4F");
       //        cout << color;
       // }

       // problem 11
       //  float m1, m2,m3, avg;

       // cout << "Enter your mark: ";
       // cin >> m1;
       // cout << "Enter your mark: ";
       // cin >> m2;
       // cout << "Enter your mark: ";
       // cin >> m3;

       // avg =  (m1+m2+m3)/3;
       // cout <<avg<<endl;

       // if (avg>= 50)
       // {
       //        cout << "Pass";
       // }else{
       //        cout << "Fail";
       // }

       // problem 24
       //  int age ;

       // cout << "Enter your age: ";
       // cin>> age;

       // if (age >=18 && age<=45)
       // {
       //       cout << "Valid age";
       // }else{
       //        cout << "Invalid age";
       // }

       // probleme 4
       // int age;
       // string license;

       // cout << "Enter your age: ";
       // cin >> age;

       // cout << "Do you have a license?: (yes,no): ";
       // cin >> license;

       // if (age > 21 && license == "yes")
       // {
       //        cout << "Hiered";
       // }else{
       //        cout << "Rejected";
       // }

       // -------------------------------------------------------

       // probleme 8
       // int mark;

       // cout << "Enter your mark: ";
       // cin >> mark;

       // if (mark>=50)
       // {
       //       cout << "Pass";
       // }else{
       //          cout << "Fail";
       // }

       // --------------------------------------------------------

       // problem 11

       // stPersonInfo persons[2];

       // readTwoPersons(persons);
       // printPersons(persons);

       // int numbers[5];

       // readGradeData(numbers);
       // printAverage(numbers);

       // stPersonInfo persons[100] ;
       // int length;
       // readNumberOfPersons(length);
       // readPersons(persons,length);
       // printPersons(persons,length);

       // int a = 10;
       // int b= 20;

       // swapNumbers(a,b);

       // cout << "A will be : " << a << endl;
       // cout << "B will be : " << b << endl;

       // int num = 7;
       // doubleValue(num);
       // cout << num;

       // testFunction(1000);

       // mylocalxinfunction();

       // int x = 20;

       // cout << "The value of x inside the main function is : " << x << endl;

       // cout << "The global x is : " << ::x << endl;

       // float result = sumByFunction();

       // cout << "***************\n";
       // cout << result;

       // sumByProcedural();

       // int num1;
       // float num2=19.99;

       // num1=num2 ;// Implicit conversion;

       // cout << num1;

       // cout << (int) num2; // explicit conversion

       // string str="123.456";

       // int strToInt = stoi(str);

       // float strToFloat = stof(str);

       // double strToDouble = stod(str);

       // cout << "String to Integer " << strToInt << endl;
       // cout << "String to Float " << strToFloat<< endl;
       // cout << "String to Double " << strToDouble << endl;

       // int num1 = 123;

       // string str = to_string(num1);

       // cout << str;

       // string myString="ELHANZOURI Zakaria";

       // cout << "The length is: " << myString.length() << endl;
       // cout << myString[2] << endl;

       // string s1 = "10", s2="30";

       // cout << s1+s2 << endl;

       // cout <<  stoi(s1) + stoi(s2) << endl;

       //       string fullName;
       //       string s1;
       //       string s2;

       //       cout << "Please enter you full name: ";
       //       getline(cin,fullName);

       //       cout << "please enter string 2: ";
       //       cin >> s1;

       //       cout << "please enter string 2: ";
       //       cin >> s2;

       //       cout << "*************\n";

       //       cout << "The length of your name is" << fullName.length() << endl ;
       //       cout << "Characters at 0, 2, 4, 7 are: " << fullName[0] << ' ' << fullName[2] << ' ' << fullName[4]<<' ' << fullName[7] << endl;
       //       cout << "Concatenating String 2 and string 2: " << s1+s2<< endl;
       //       cout << stoi(s1) + stoi(s2)<< endl;

       // stPerson person1;

       // person1.firstName = "Zakaria";
       // person1.lastName="ELHANZOURI";

       // person1.contactInfo.phone="212777276886";
       // person1.contactInfo.email="elhenzo101@gmail.com";

       // person1.contactInfo.address.country="Morocco";
       // person1.contactInfo.address.city="Casablanca";
       // person1.contactInfo.address.street="Sidi bernoussi el wifak";
       // person1.contactInfo.address.zipCode="20600";

       // cout << person1.contactInfo.address.country;

       // Week MyFavDay= Week::Fri;

       // cout<< MyFavDay;

       // Colors MyFavColor= Colors::Blue;

       // cout << MyFavColor;

       //     --------------------------------------------------------------------------------------------
       //  Car car1;

       //  cout << "Enter the car's mark: ";
       //  cin>> car1.mark;
       //  cin.ignore();
       //  cout << "Enter the car's model: ";
       //  getline(cin,car1.model);
       //  cout << "Enter the car's year: ";
       //  cin >> car1.year;
       // cin.ignore();
       //  cout << "Enter the full name of the owner: ";
       //  getline(cin,car1.owner.fullName);
       //  cout << "Enter the  phone of the owner: ";
       //  cin >> car1.owner.phone;

       //  cout << "Enter the country of the owner: ";
       //  cin >> car1.owner.address.country;
       //  cout << "Enter the city of the owner: ";
       //  cin >> car1.owner.address.city;
       //  cin.ignore();
       //  cout << "Enter the street of the owner: ";
       //  getline(cin,car1.owner.address.street);

       //  cout << car1.mark << endl;
       //  cout << car1.model << endl;
       //  cout << car1.year << endl;
       //  cout << car1.owner.fullName << endl;
       //  cout << car1.owner.phone << endl;
       //  cout << car1.owner.address.country << endl;
       //  cout << car1.owner.address.city << endl;
       //  cout << car1.owner.address.street << endl;

       // -------------------------------------------------------------------------------------------------------

       // string name;
       // int age ;
       // string city ;
       // string country;
       // int monthlySalary;

       // char gender ;
       // bool isMarried;

       // cout << "Please enter your name: ";
       // cin >> name  ;

       // cout << "Please enter your age: ";
       // cin >> age;

       // cout << "Please enter your city: ";
       // cin >> city;

       // cout << "Please enter your country: ";
       // cin >> country;

       // cout << "Please enter your monthly salary: ";
       // cin >> monthlySalary;

       // cout << "What is your gender?: ";
       // cin >> gender;

       // cout  << "Are you married (true or false): ";
       // cin >> isMarried;

       // int yearlySalary= monthlySalary * 12;

       // cout << "*******************\n";
       // cout << "Name: " << name << endl;
       // cout << "Age: " << age << endl;
       // cout << "City: " << city << endl;
       // cout << "Country: " << country << endl;
       // cout << "Monthly Salary: " << monthlySalary << endl;
       // cout << "Yearly Salary: " << yearlySalary << endl;
       // cout << "Gender: " << gender << endl;
       // cout << "Marriend: " << isMarried << endl;
       // cout << "*******************";

       // int number1;
       // int number2;
       // int number3;

       // cout << "Enter number 1: ";
       // cin >> number1;
       // cout << "Enter number 2: ";
       // cin >> number2;
       // cout << "Enter number 3: ";
       // cin >> number3;
       // int total=number1+number2+number3;

       // cout << number1 << "+\n";
       // cout << number2 << "+\n";
       // cout << number3 << "\n" << endl;
       // cout << "___________________________\n";
       // cout << "Total = " << total;

       // const short  int fiveYears = 5;
       // short int age;

       // cout << "Enter your age: ";
       // cin >> age;

       // cout << "After "<< fiveYears <<" years you will be "<< age + fiveYears << " years old";

       // short int a;
       // short int b;

       // cout << "please enter the first number A: ";
       // cin >> a;
       // cout << "please enter the second number B: ";
       // cin >> b;

       // cout << a << " + " << b << " = " << a+b << endl;
       // cout << a << " - " << b << " = " << a-b << endl;
       // cout << a << " * " << b << " = " << a*b << endl;
       // cout << a << " / " << b << " = " << a/b << endl;
       // cout << a << " % " << b << " = " << a%b << endl;

       // ----------------------------------------------------------------------------------

       // problem #7

       // short int userNumber;
       // short int halfUserNumber;

       // cout << "Please Enter a number: ";
       // cin >> userNumber;

       // halfUserNumber = userNumber/2;

       // cout << "Half of " << userNumber << " is " << halfUserNumber;

       // ----------------------------------------------------------------------------------

       // ----------------------------------------------------------------------------------

       // problem #9

       // short int num1;
       // short int num2;
       // short int num3;

       // int total;

       // cout << "Enter the number 1: ";
       // cin >> num1;
       // cout << "Enter the number 2: ";
       // cin >> num2;
       // cout << "Enter the number 3: ";
       // cin >> num3;

       // total = num1+num2+num3;

       // cout << total;

       // ----------------------------------------------------------------------------------

       // ----------------------------------------------------------------------------------

       // problem #10

       // short int mark1;
       // short int mark2;
       // short int mark3;
       // int avgMarks;

       // cout << "Enter mark 1: ";
       // cin >> mark1;
       // cout << "Enter mark 2: ";
       // cin >> mark2;
       // cout << "Enter mark 3: ";
       // cin >> mark3;

       // avgMarks = (mark1+mark2+mark3) / 3;

       // cout << avgMarks;

       // ----------------------------------------------------------------------------------

       // ----------------------------------------------------------------------------------

       // problem #14

       // short int num1;
       // short int num2;

       // short int temp;

       // cout << "Enter number 1: ";
       // cin >> num1;
       // cout << "Enter number 2: ";
       // cin >> num2;

       // cout << num1 << endl << num2<< endl;

       // temp= num1;
       // num1=num2;
       // num2=temp;

       // cout << num1 << endl << num2<< endl;

       // ----------------------------------------------------------------------------------

       // ----------------------------------------------------------------------------------

       // problem #14

       // int withOfRec , highOfRec, area;

       // cout << "Enter the with of the rectangle: ";
       // cin >> withOfRec;
       // cout << "Enter the high of the rectangle: ";
       // cin >> highOfRec;

       // area = withOfRec * highOfRec;

       // cout << area;

       // ----------------------------------------------------------------------------------

       // problem #17

       // int withOfTr , highOfTr , area;

       // cout << "Enter the with of triangle: ";
       // cin >> withOfTr;
       // cout << "Enter the high of triangle: ";
       // cin >> highOfTr;

       // area = (withOfTr/2)* highOfTr;

       // cout << area;

       // ----------------------------------------------------------------------------------

       // problem #21

       // int l;
       // float area;
       // const float PI = numbers::pi;

       // cout << "Enter l of the circle: ";
       // cin >> l;

       // area =  (l*l)/4*PI;

       // cout << area;

       // ----------------------------------------------------------------------------------

       // problem #19

       // int D;

       // const float PI = numbers::pi;

       // float area;

       // cout << "Enter D of the circle: ";
       // cin >> D;

       // area = (PI * D*D)/4;

       // cout << area;

       // ----------------------------------------------------------------------------------

       // problem #20

       // int A;
       // const float PI = numbers::pi;
       // float area;

       // cout << "Enter the A of the square: ";
       // cin >> A;

       // area = (PI * A*A) /4;

       // cout << area;

       // ----------------------------------------------------------------------------------

       // problem #22

       // float a, b ;
       // const float PI = numbers::pi;
       // float area;

       // cout << "Enter A of the triangle: ";
       // cin >>a;
       // cout << "Enter B of the triangle: ";
       // cin >>b;

       // area =(PI*b*b/4)*((2*a-b)/(2*a+b));

       // cout << area;

       // ----------------------------------------------------------------------------------

       // problem #31

       // int number;

       // int numPow2,numPow3,numPow4 ;

       // cout << "Enter your number: ";
       // cin >> number;
       // numPow2= number*number;
       // numPow3= number*number*number;
       // numPow4= number*number*number*number;

       // cout << numPow2 << endl << numPow3 << endl << numPow4;

       // ----------------------------------------------------------------------------------

       // problem #35

       // float pennis, nickles, dimes, quarters, dollars;

       // float nicklesToPen, dimesToPen, quartersToPen ,dollarsToPen ;

       // cout << "Enter your Pennis: ";
       // cin >> pennis;

       // cout << "Enter your Nickles: ";
       // cin >> nickles;

       // cout << "Enter your Dimes: ";
       // cin >> dimes;

       // cout << "Enter your Quarters: ";
       // cin >> quarters;

       // cout << "Enter your Dollars: ";
       // cin >> dollars;

       // nicklesToPen = nickles*5;
       // dimesToPen=dimes*10;
       // quartersToPen=quarters*25;
       // dollarsToPen=dollars*100;

       // pennis= pennis + nicklesToPen + dimesToPen + quartersToPen + dollarsToPen;
       // dollars= pennis/100;

       // cout << pennis << " pennis\n";
       // cout << dollars << " dollars\n";

       // ----------------------------------------------------------------------------------

       // problem #39

       // int cashPaid;
       // float totalBill;

       // cout << "Enter the cash paid: ";
       // cin >> cashPaid;

       // cout << "Enter the total bill: ";
       // cin >> totalBill;

       // float remainder = cashPaid - totalBill;

       // cout << remainder;

       // ----------------------------------------------------------------------------------

       // problem #40

       // float servicesFee= 1.1;
       // float tax = 1.16;

       // float billValue;
       // float tatolValue;

       // cout << "Enter the bill value: ";
       // cin >> billValue;

       // tatolValue = billValue * servicesFee * tax;

       // cout << tatolValue;

       // ----------------------------------------------------------------------------------

       // problem #42

       // int days;
       // int hours;
       // int minutes;
       // int seconds;

       // float daysToSec,hoursToSec,minutesToSec;

       // float totalSeconds;

       // cout << "Enter how many days: ";
       // cin >> days;
       // cout << "Enter how many hours: ";
       // cin >> hours;
       // cout << "Enter how many minutes: ";
       // cin >> minutes;
       // cout << "Enter how many seconds: ";
       // cin >> seconds;

       // daysToSec=days * 24 * 60 * 60;
       // hoursToSec = hours * 60 * 60;
       // minutesToSec =minutes * 60;

       // totalSeconds= daysToSec + hoursToSec + minutesToSec + seconds;

       // cout << totalSeconds << " seconds";

       // ----------------------------------------------------------------------------------

       // problem #43

       // const int secondsPerDay= 24*60*60;
       // const int secondsPerHour=60*60;
       // const int secondsPerMinute=60;

       // int days,hours,minutes,seconds,secondsInput,remainder;

       // cout << "How many seconds did you work?: ";
       // cin >> secondsInput;

       // days = floor(secondsInput / secondsPerDay);
       // remainder = (secondsInput % secondsPerDay);

       // hours = floor(remainder/secondsPerHour);
       // remainder = (remainder % secondsPerHour);

       // minutes = floor(remainder/secondsPerMinute);
       // remainder= (remainder % secondsPerMinute);

       // seconds= remainder;

       // cout << days << ':' << hours << ':' << minutes << ':' << seconds;

       // ----------------------------------------------------------------------------------

       // problem #47

       // int loanAmount;
       // int monthlyPayment;
       // int totalMonthsToSettleTheLoan;

       // cout << "Please enter your loan amount: ";
       // cin >> loanAmount;

       // cout << "Please enter your monthly payment: ";
       // cin >> monthlyPayment;

       // totalMonthsToSettleTheLoan= loanAmount / monthlyPayment;

       // cout << "It will take: "<< totalMonthsToSettleTheLoan << " Months";

       // ----------------------------------------------------------------------------------

       // problem #48

       // int loanAmount;
       // int totalMonthsToSettleTheLoan;

       // int monthlyPayment;

       // cout << "Please enter the loan amount: ";
       // cin >> loanAmount;

       // cout << "Please enter the total months to settle the loan: ";
       // cin >> totalMonthsToSettleTheLoan;

       // monthlyPayment = loanAmount / totalMonthsToSettleTheLoan;

       // cout << "You have to pay "<< monthlyPayment << " to settle the loan in " << totalMonthsToSettleTheLoan << " months";

       // -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

       // int a,b;

       // cout << "Please enter the first number a: ";
       // cin >> a;
       // cout << "Please enter the second number b: ";
       // cin >> b;

       // cout << a << " = " << b << " is " << (a==b)<< endl;
       // cout << a << " != "<< b << " is "<<(a!=b)<< endl;
       // cout << a << " < " << b << " is "<<(a<b)<< endl;
       // cout << a << " > "<< b << " is "<<(a>b)<< endl;
       // cout << a << " <= "<< b << " is "<<(a<=b)<< endl;
       // cout << a << " >= "<< b << " is "<<(a>=b)<< endl;

       // cout << ((6<5 && 7==7) || (1 || 0));
       // cout << !(6<5 && 7==7) || (1 || 0);
       // cout << !(6<5 && 7==7) || !(1 || 0);
       // cout << (!(6<5 && 7==7) && !(1 || 0));

       // cout << ( (5>6 && 7<=8) || (8>1 && 4<=3) && true );
       // cout << ( (5>6 && !(7<=8)) && (8>1 || 4<=3) || true );

       // cout << sqrt(64)<< endl;
       // cout << sqrt(50)<< endl;

       // cout << round(2.3) << endl;
       // cout << round(2.5) << endl;
       // cout << round(2.7) << endl;

       // cout << round(sqrt(50))<< endl;

       // cout << pow(2,4);

       // ---------------------------------------------------------------

       // #16

       // float diag, sideArea;
       // float area;

       // cout << "Enter the diagonale: ";
       // cin >> diag;

       // cout << "Enter the side area: ";
       // cin >> sideArea;

       // area = sideArea * sqrt(pow(diag,2) - pow(sideArea,2));

       // cout << area;

       // ---------------------------------------------------------------------------------
       // #18

       // float r,area;

       // cout << "Enter the r of the circle: ";
       // cin >> r;

       // area= ceil(numbers::pi * pow(r,2)) ;

       // cout << area;

       // ---------------------------------------------------------------------------------
       // #19

       // float diametre, area;

       // cout << "Enter the diametre of the circle: ";
       // cin >> diametre;

       // area= ceil((M_PI * pow(diametre,2))/4);

       // cout << area;

       // ---------------------------------------------------------------------------------
       // #20

       // float a, area;

       // cout << "Enter the square area: ";
       // cin >> a;

       // area= ceil((M_PI*pow(a,2))/4) ;

       // cout << area;

       // ---------------------------------------------------------------------------------
       // #21

       // float l,area;

       // cout << "Enter the circumference of the circle: ";
       // cin>> l;

       // area= floor(pow(l,2)/(M_PI*4));

       // cout << area;

       // ---------------------------------------------------------------------------------
       // #22

       // float a, b, area;

       // cout << "Enter A: ";
       // cin >> a;
       // cout << "Enter B: ";
       // cin>> b;

       // area= floor(M_PI * (pow(b,2)/4) * ( (2*a - b) / (2*a + b) )) ;

       // cout << area;

       // ---------------------------------------------------------------------------------
       // #23

       // float a,b,c,p,area;

       // cout << "Enter A: ";
       // cin >> a;
       // cout << "Enter B: ";
       // cin>> b;
       // cout << "Enter C: ";
       // cin>> c;

       // p= (a+b+c)/2;

       // area=round( M_PI  * pow( (a*b*c) / (4* sqrt( p*(p-a)*(p-b)*(p-c) ))  ,2)) ;

       // cout << area;

       // ---------------------------------------------------------------------------------
       // #31

       // float number;

       // cout << "Enter your number: ";
       // cin >> number;

       // cout << round(pow(number,2)) << endl;
       // cout << round(pow(number,3)) << endl;
       // cout << round(pow(number,4)) << endl;

       // ---------------------------------------------------------------------------------
       // #32

       // float number, power;

       // cout << "Enter your number: ";
       // cin  >> number;
       // cout << "Enter your power: ";
       // cin  >> power;

       // cout <<round( pow(number,power));

       // ---------------------------------------------------------------------------------
       // #42

       // int days,hours,minutes,seconds;

       // cout << "Enter the number of days: ";
       // cin >> days;
       // cout << "Enter the number of hours: ";
       // cin >> hours;
       // cout << "Enter the number of minutes: ";
       // cin >> minutes;
       // cout << "Enter the number of seconds: ";
       // cin >> seconds;

       // seconds += round((days*24*60*60) + (hours*60*60) + (minutes*60));

       // cout << seconds;

       // ---------------------------------------------------------------------------------
       // #43

       // const int secondsPerDay=(24*60*60);
       // const int secondsPerHour=(60*60);
       // const int secondsPerminute=(60);

       // int seconds,days,hours,minutes;
       // int remainder;

       // cout << "Enter the number of seconds: ";
       // cin >> seconds;

       // days = round(seconds / secondsPerDay);
       // remainder = (seconds % secondsPerDay);

       // hours = round(remainder / secondsPerHour);
       // remainder = (remainder % secondsPerHour);

       // minutes = round(remainder / secondsPerminute);
       // remainder = (remainder % secondsPerminute);
       // seconds = remainder;

       // cout << days << ':' << hours << ':' << minutes << ':' << seconds;

       return 0;
}
