/* THE GRAND CODE FOR KBC
LET'S BEGIN*/
#include<iostream>
#include<windows.h>
#include<time.h>
using namespace std;
void flipq(int);
int l=0,p=0;//l for 50-50, p for flip question
int specialCase=0;//in order to dont write snything if flipq is used fter fifty
int specialCase2=0; // if answer given in flipq is wrong and to end game
string prize[15]= {"Rs 1 thousand","Rs 5 thousand","Rs 30 thousand","Rs 50 thousand","Rs 75 thousand","Rs 1 lakh","Rs 1.5 lakhs","Rs 3 lakhs","Rs 10 lakhs","Rs 20 lakhs","Rs 30 lakhs","Rs 50 lakhs","Rs 75 lakhs","Rs 1 crore","Rs 7 crore"};
char fifty(string a,string b,int prizeVariable)
{
    l++;
    char choice;
    cout<< "you have opted for 50-50 lifeline"<<endl;
    cout<<"NEW OPTIONS FOR U ARE AS FOLLOWS"<<endl;
    cout<< a << "\t"<< b<< endl;
    cout<< "enter your option(or p for another lifeline)"<<endl;
    cin>>choice;
    while((choice=='l'||choice=='L')||((choice=='p'||choice=='P')&&(p==1)))
    {
        cout<< "you  dont have this lifeline left choose a valid option"<<endl;
        cin>> choice;
    }
    if(choice=='p'||choice=='P')
    {
        flipq(prizeVariable);
        specialCase=1;
        return 'x';
    }
    else
    {
        return choice;
    }
}

void flipq(int prizeVariable)
{
    cout<< "You have used your Flip question lifeline"<<endl;
    p++;
    string optionA,optionB,optionC,optionD;
    optionA="A. Great white shark";
    optionB="B. Blue whale";
    optionC="C. Lion seal        ";
    optionD="D. Lion fish";
    cout<< "your new question and options are as follows"<<endl;
    cout<< "what is biggest mammal on the earth"<<endl;
    cout<< optionA<<"\t"<< optionB<<endl;
    cout<< optionC<< "\t"<<optionD<<endl;
    cout<< "choose from these options or enter l or p if lifeline is available";
    char choice;
    cin>>choice;
    while((choice=='p'||choice=='P')||((choice=='l'||choice=='L')&&(l==1)))
    {
        cout<< "you dont have this lifeline left enter a valid choice"<<endl;
        cin>> choice;
    }
    if (choice=='l'||choice=='L')
        choice=fifty(optionA,optionB,prizeVariable);
    if(choice=='b'||choice=='B')
    {
        cout<< "you have entered correct option "<<endl;
        cout<< "you have won "<<prize[prizeVariable]<<endl;
    }
    else
    {
        cout<<"option you entered is incorrect correct option was B so you lost"<<endl;
        specialCase2=1;
    }
}
int main()
{
    // INTRO
    char close='y';//to close game if late ans plzz treat n as yes and y as no
    cout<< "SWAGAT HAI AAPKA KAUN BANEGA CRORE PATI"<<endl;
    cout<< "AAJ AAP AUR MEIN KHELENGE KBC"<<endl;
    cout<< "TAALIYAN!!"<<endl;
    cout<< "\n Total number of questions: 15"<<endl;
    cout<< "Total prize money is: 7 crores"<<endl;
    cout<< "PRIZE MONEY CHART IS AS FOLLOWS:"<<endl;
    cout<< "1  ->  Rs 1 thousand"<<endl;
    cout<< "2  ->  Rs 5 thousand"<<endl;
    cout<< "[3]  ->  Rs 30 thousand"<<endl;
    cout<< "4  ->  Rs 50 thousand"<<endl;
    cout<< "5  ->  Rs 75 thousand"<<endl;
    cout<< "6  ->  Rs 1 lakh"<<endl;
    cout<< "7  ->  Rs 1.5 lakhs"<<endl;
    cout<< "[8]  ->  Rs 3 lakhs"<<endl;
    cout<< "9  ->  Rs 10 lakhs"<<endl;
    cout<< "10 ->  Rs 20 lakhs"<<endl;
    cout<< "11 ->  Rs 30 lakhs"<<endl;
    cout<< "[12] ->  Rs 50 lakhs"<<endl;
    cout<< "13 ->  Rs 75 lakhs"<<endl;
    cout<< "14 ->  Rs 1 crore"<<endl;
    cout<< "15 ->  Rs 7 crore"<<endl;
    cout<< "INTERMEDIATE QUESTIONS LEVEL:3,8,12"<<endl;
    //INTRO-LIFELINES
    cout<< "AVAILABLE LIFE LINES:        [CAN BE USED ONLY ONCE]"<<endl;
    cout<< "1) 50-50 (PRESS L TO AVAIL DURING QUESTION)"<<endl;
    cout<< "2) FLIP QUESTION (PRESS P TO AVAIL DURING QUESTION)"<<endl;
    while(close=='y'||close=='Y')
    {
        p=0;
        l=0;
        specialCase2=0;
        specialCase=0;

        cout<< "PRESS ANY KEY TO START: "<<endl;
        char rough1;
        cin>> rough1;
        cout<<"\n\n\n\n";
        cout<< "\tGAME STARTED ALL THE BEST"<<endl<<endl<<endl;
        int prizeVariable=0;
        string optionA,optionB,optionC,optionD;
        char choice;
        optionA="A. Assam     ";
        optionB="B. Karnataka";
        optionC="C. Tamil Nadu";
        optionD="D. Himachal Pradesh";
        cout<< "\tQUESTION 1 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t5"<<endl<<endl;
        Sleep(1000);
        cout<< "\t4"<<endl<<endl;
        Sleep(1000);
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        clock_t strt = clock();  //start time for clock
        clock_t dne;
        float diff;
        cout<< "QUESTION 1:"<<endl<<endl;// correct ans d
        cout<<"Scientists have recently claimed that the chemicals in the Kangra Tea could be effective in boosting immunity as they"<<endl<<"can block coronavirus activity better than anti-HIV drugs.Kangra Tea belongs to which of the following regions?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            clock_t dne =clock(); //done time for clock
            float diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead"<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '0'";
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionD,prizeVariable);
            clock_t dne =clock(); //done time for clock
            float diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead"<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was D "<<endl;
                    cout<< "total money won = '0'";
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='d'||choice=='D')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 1 thousand INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was D "<<endl;
                    cout<< "you have lost and money won = 0"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            clock_t dne =clock(); //done time for clock
            float diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead"<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='d'||choice=='D')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 1 thousand INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was D "<<endl;
                cout<< "you have lost and money won = 0"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }




        // QUESTION 2 IS STARTING FROM HERE
        prizeVariable=1;
        optionA="A. Bihar        ";
        optionB="B. Assam";
        optionC="C. Uttar Pradesh";
        optionD="D. Madhya Pradesh";
        cout<< "\tQUESTION 2 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 2:"<<endl<<endl;// correct ans d
        cout<<"India’s first dolphin observatory was planned to setup in which of the following states?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            clock_t dne = clock(); //done time for clock
            float diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 0"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '0'";
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionB,prizeVariable);
            clock_t dne =clock(); //done time for clock
            float diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 0"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was A "<<endl;
                    cout<< "total money won = '0'";
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='a'||choice=='A')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 5 thousand INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was A "<<endl;
                    cout<< "you have lost and money won = 0"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 0"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='a'||choice=='A')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 5 thousand INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was A"<<endl;
                cout<< "you have lost and money won = 0"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }


//QUESTION 3 BEGINS HERE
        prizeVariable=2;
        optionA="A. Ministry of Science and Technology         ";
        optionB="B. Ministry of Health and Family Welfare";
        optionC="C. Ministry of Agriculture and Farmers Welfare";
        optionD="D. Ministry of Environment, Forest and Climate Change";
        cout<< "\tQUESTION 3 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 3:"<<endl<<endl;// correct ans d
        cout<<"'Locust Warning Organisation', often seen in the news recently, is a unit under which of the following ministries?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 0"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '0'";
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionC,prizeVariable);
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 0"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was C"<<endl;
                    cout<< "total money won = '0'";
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='c'||choice=='C')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 30 thousand INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was C"<<endl;
                    cout<< "you have lost and money won = 0"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 0"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='c'||choice=='C')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 30 thousand INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was C"<<endl;
                cout<< "you have lost and money won = 0"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }



//ques 4 begins here
        prizeVariable=3;
        optionA="A. A Provision in the Open Skies Treaty                           ";
        optionB="B. The World’s largest all-electric aircraft";
        optionC="C. A place near the Line of Actual Control between India and China";
        optionD="D. None of the above";
        cout<< "\tQUESTION 4 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 4:"<<endl<<endl;// correct ans d
        cout<<"Cessna Caravan, sometimes seen in the news recently is?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }

            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '30 thousand' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionB,prizeVariable);
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }

            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was B"<<endl;
                    cout<< "total money won = '30 thousand' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='b'||choice=='B')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 50 thousand INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was B"<<endl;
                    cout<< "you have lost and money won = 30 thousand INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }

            if(choice=='b'||choice=='B')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 50 thousand INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was B"<<endl;
                cout<< "you have lost and money won = 30 thousand INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }

//question 5 begins here
        prizeVariable=4;
        optionA="A. India";
        optionB="B. U.S.A";
        optionC="C. China";
        optionD="D. Russia";
        cout<< "\tQUESTION 5 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 5:"<<endl<<endl;// correct ans d
        cout<<"'Operation Warp Speed', an initiative aimed at developing, manufacturing and distributing a 'proven'"<<endl<<" coronavirus vaccine, was launched by which of the following countries?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '30 thousand' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionB,prizeVariable);
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was B"<<endl;
                    cout<< "total money won = '30 thousand' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='b'||choice=='B')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 75 thousand INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option B"<<endl;
                    cout<< "you have lost and money won = 30 thousand INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='b'||choice=='B')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 75 thousand INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option B"<<endl;
                cout<< "you have lost and money won = 30 thousand INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }



//question 6 begins here
        prizeVariable=5;
        optionA="A. Goa    ";
        optionB="B. Kerala";
        optionC="C. Gujarat";
        optionD="D. Tamil Nadu";
        cout<< "\tQUESTION 6 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 6:"<<endl<<endl;// correct ans d
        cout<<"Puntius Sanctus is a new freshwater fish found recently in which of the following regions?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            clock_t dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '30 thousand' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionD,optionB,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was D"<<endl;
                    cout<< "total money won = '30 thousand' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='d'||choice=='D')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 1 lakh INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was D"<<endl;
                    cout<< "you have lost and money won = 30 thousand INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            if(choice=='d'||choice=='D')
            {
                dne =clock(); //done time for clock
                diff= float(dne-strt)/CLOCKS_PER_SEC;
                cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
                if(diff>40)
                {
                    cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                    cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                    cout<< "total money won= 30 thousand"<<endl;
                    close='n';
                    cout<< "if u want to play again press y and enter"<<endl;
                    cin>>close;
                    continue;
                }
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 1 lakh INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was D"<<endl;
                cout<< "you have lost and money won = 30 thousand INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }




//question 7 begins here
        prizeVariable=6;
        optionA="A. China   ";
        optionB="B. France";
        optionC="C. Ethiopia";
        optionD="D. Pakistan";
        cout<< "\tQUESTION 7 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 7:"<<endl<<endl;// correct ans d
        cout<<"'The Grand Rennaissance Dam hydropower project', often seen in the news recently, is being constructed by?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '30 thousand' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionD,optionC,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was C"<<endl;
                    cout<< "total money won = '30 thousand' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='c'||choice=='C')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 1.5 lakhs INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was C"<<endl;
                    cout<< "you have lost and money won = 30 thousand INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='c'||choice=='C')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 1.5 lakhs INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was C"<<endl;
                cout<< "you have lost and money won = 30 thousand INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }



//question 8 is coming
        prizeVariable=7;
        optionA="A. Our solutions are in nature         ";
        optionB="B. Biodiversity and Climate Change";
        optionC="C. Biodiversity and Sustainable Tourism";
        optionD="D. Our Biodiversity, Our Food, Our Health";
        cout<< "\tQUESTION 8 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 8:"<<endl<<endl;// correct ans d
        cout<<"Which of the following is the theme for the International Day for Biological Diversity, 2020?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '30 thousand' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionC,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was A"<<endl;
                    cout<< "total money won = '30 thousand' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='a'||choice=='A')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 3 lakhs INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was A"<<endl;
                    cout<< "you have lost and money won = 30 thousand INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 30 thousand"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='a'||choice=='A')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 3 lakhs INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was A"<<endl;
                cout<< "you have lost and money won = 30 thousand INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }




//question 9 is coming
        prizeVariable=8;
        optionA="A. U.S.A and China       ";
        optionB="B. U.S.A and Russia";
        optionC="C. Russia and North Korea";
        optionD="D. None of the above";
        cout<< "\tQUESTION 9 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 9:"<<endl<<endl;// correct ans d it was for q 1
        cout<<"New START Treaty is a nuclear arms reduction treaty between?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '3 lakhs' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionB,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was B"<<endl;
                    cout<< "total money won = '3 lakhs' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='b'||choice=='B')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 10 lakhs INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was B"<<endl;
                    cout<< "you have lost and money won = 3 lakhs INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='b'||choice=='B')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 10 lakhs INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was B"<<endl;
                cout<< "you have lost and money won = 3 lakhs INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }




//question 10 is coming
        prizeVariable=9;
        optionA="A. Sonic Boom       ";
        optionB="B. Doppler Waves";
        optionC="C. Super Mach Quakes";
        optionD="D. None of the above";
        cout<< "\tQUESTION 10 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 10:"<<endl<<endl;// correct ans d it was for q 1
        cout<<"When a sound producing source moves with a speed higher than that of sound, it produces shock waves in air."<<endl<<"The sharp and loud sound produced by these shock waves is called?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '3 lakhs' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionB,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was A"<<endl;
                    cout<< "total money won = '3 lakhs' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='a'||choice=='A')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 20 lakhs INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was A"<<endl;
                    cout<< "you have lost and money won = 3 lakhs INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            if(choice=='a'||choice=='A')
            {
                dne =clock(); //done time for clock
                diff= float(dne-strt)/CLOCKS_PER_SEC;
                cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
                if(diff>40)
                {
                    cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                    cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                    cout<< "total money won= 3 lakhs INR"<<endl;
                    close='n';
                    cout<< "if u want to play again press y and enter"<<endl;
                    cin>>close;
                    continue;
                }
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 20 lakhs INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was A"<<endl;
                cout<< "you have lost and money won = 3 lakhs INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }



//question 11 is coming
        prizeVariable=10;
        optionA="A. Sound is a mechanical wave and needs a material medium like air, water, steel etc. for its propagation ";
        optionB="B. In sound propagation, it is the energy of the sound that travels and not the particles of the medium";
        optionC="C. The speed of sound waves depends on number of factors such as temperature of the air and altitude, etc.";
        optionD="D. None of the above";
        cout<< "\tQUESTION 11 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 11:"<<endl<<endl;// correct ans d it was for q 1
        cout<<"Which one of the following statements is incorrect with respect to Sound Waves?"<<endl<<endl;
        cout<<optionA<<endl;
        cout<<optionB<<endl;
        cout<<optionC<<endl;
        cout<<optionD<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '3 lakhs' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionD,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was D"<<endl;
                    cout<< "total money won = '3 lakhs' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='d'||choice=='D')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 30 lakhs INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was D "<<endl;
                    cout<< "you have lost and money won = 3 lakhs INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='d'||choice=='D')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 30 lakhs INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was D "<<endl;
                cout<< "you have lost and money won = 3 lakhs INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }



//question 12 is coming
        prizeVariable=11;
        optionA="A. Punjab    ";
        optionB="B. Jharkhand";
        optionC="C. Puducherry";
        optionD="D. Chhattisgarh";
        cout<< "\tQUESTION 12 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 12:"<<endl<<endl;// correct ans d it was for q 1
        cout<<"Rajiv Gandhi Kisan Nyaya Yojana is an income support programme for farmers by which of the following"<<endl<<"States/UT?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '3 lakhs' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionD,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was D"<<endl;
                    cout<< "total money won = '3 lakhs' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='d'||choice=='D')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 50 lakhs INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was D "<<endl;
                    cout<< "you have lost and money won = 3 lakhs INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION D"<<endl<<endl;
                cout<< "total money won= 3 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='d'||choice=='D')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 50 lakhs INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was D "<<endl;
                cout<< "you have lost and money won = 3 lakhs INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }




//question 13 is coming
        prizeVariable=12;
        optionA="A. It is a situation when two or more epidemics interact to produce an increased burden of disease in a population                        ";
        optionB="B. It is declared when a new disease for which people do not have immunity spreads around the world beyond expectations";
        optionC="C. It is a situation in which a disease affects 90% of the region’s population and the people in the region learn to live with the disease";
        optionD="D. It is declared when the presence or usual prevalence of its infectious agent is constant within a given geographical area or population group";
        cout<< "\tQUESTION 13 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 13:"<<endl<<endl;// correct ans d it was for q 1
        cout<<"Which one of the following best describes the term 'Syndemic'?"<<endl<<endl;
        cout<<optionA<<endl<<optionB<<endl;
        cout<<optionC<<endl<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '50 lakhs' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionA,optionD,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was A"<<endl;
                    cout<< "total money won = '50 lakhs' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='a'||choice=='A')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 75 lakhs INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was A "<<endl;
                    cout<< "you have lost and money won = 50 lakhs INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION A"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='a'||choice=='A')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 75 lakhs INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was A "<<endl;
                cout<< "you have lost and money won = 50 lakhs INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }



//question 14 is coming
        prizeVariable=13;
        optionA="A. Ministry of Rural Development         ";
        optionB="B. Ministry of Science and Technology";
        optionC="C. Ministry of Food Processing Industries";
        optionD="D. Ministry of Agricultural and Farmers Welfare";
        cout<< "\tQUESTION 14 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 14:"<<endl<<endl;// correct ans d it was for q 1
        cout<<"Operation Greens is run by which of the following Ministries?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '50 lakhs' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionC,optionD,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was C"<<endl;
                    cout<< "total money won = '50 lakhs' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='c'||choice=='C')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 1 crore INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was C "<<endl;
                    cout<< "you have lost and money won = 50 lakhs INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION C"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='c'||choice=='C')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 1 crore INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was C "<<endl;
                cout<< "you have lost and money won = 50 lakhs INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }



//question 15 is coming
        prizeVariable=14;
        optionA="A. 22 june ";
        optionB="B. 26 july";
        optionC="C. 27 april";
        optionD="D. 15 august";
        cout<< "\tQUESTION 15 IS COMING IN..."<<endl;
        cout<<"***(GIVE ANSWER WITHIN 40 SECONDS)***"<<endl<<endl;
        cout<< "\t3"<<endl<<endl;
        Sleep(1000);
        cout<< "\t2"<<endl<<endl;
        Sleep(1000);
        cout<< "\t1"<<endl<< endl;
        Sleep(1000);
        strt = clock();  //start time for clock
        cout<< "QUESTION 15:"<<endl<<endl;// correct ans d it was for q 1
        cout<<"WHEN IS KARGIL VIJAY DIWAS CELEBRATED?"<<endl<<endl;
        cout<<optionA<<"\t"<<optionB<<endl;
        cout<<optionC<<"\t"<<optionD<<endl<<endl;
        cout<< "LIFELINES LEFT:"<<endl<<endl;
        if(l==0)
            cout<<"50-50 (PRESS L TO USE)"<<endl;
        if(p==0)
            cout<< "FLIP QUESTION (PRESS P TO USE)"<<endl<<endl;
        cout<< "SELECT OPTIONS WITH A,B,C,D    OR   L,P FOR HELPLINE IF IT IS LEFT"<<endl<<endl;
        cin>>choice;

        while(((choice=='l'||choice=='L')&&(l==1))||((choice=='p'||choice=='P')&&(p==1)))
        {
            cout<< "you dont have this lifeline left so choose another option"<<endl;
            cin>> choice;
        }
        if(choice=='p'||choice=='P')
        {
            flipq(prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase2==1)
            {
                cout<< "you have lost this match "<<endl;
                cout<< "total money won = '50 lakhs' INR"<<endl;
                close='n';
                cout<< "would you like to play again if yes press y"<<endl;
                cin>> close;
                continue;
            }
        }
        else if(choice=='l'||choice=='L')
        {
            choice=fifty(optionC,optionB,prizeVariable);
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(specialCase==1)
            {
                if(specialCase2==1)
                {
                    cout<< "you have lost this match correct option was B"<<endl;
                    cout<< "total money won = '50 lakhs' INR"<<endl;
                    close='n';
                    cout<< "would you like to play again if yes press y"<<endl;
                    cin>> close;
                    continue;
                }
            }
            else
            {
                if(choice=='b'||choice=='B')
                {
                    cout<< "the option u selected is correct "<<endl;
                    cout<< "you have won 7 crores INR"<<endl;
                }
                else
                {
                    cout<< "the option u entered is wrong correct option was B "<<endl;
                    cout<< "you have lost and money won = 50 lakhs INR"<<endl;
                    close= 'n';
                    cout<< "do u want to play again press y if yes"<<endl;
                    cin>> close;
                    continue;
                }
            }
        }
        else
        {
            dne =clock(); //done time for clock
            diff= float(dne-strt)/CLOCKS_PER_SEC;
            cout<< "\n TIME TAKEN: "<<diff<<"seconds"<<endl<<endl;
            if(diff>40)
            {
                cout<< "sorry you were late so you lost you cant play ahead "<<endl<<endl;
                cout<< "correct answer of  the above question was OPTION B"<<endl<<endl;
                cout<< "total money won= 50 lakhs INR"<<endl;
                close='n';
                cout<< "if u want to play again press y and enter"<<endl;
                cin>>close;
                continue;
            }
            if(choice=='b'||choice=='B')
            {
                cout<< "the option u selected is correct "<<endl;
                cout<< "you have won 7 crores INR"<<endl;
            }
            else
            {
                cout<< "the option u entered is wrong correct option was B "<<endl;
                cout<< "you have lost and money won = 50 lakhs INR"<<endl;
                close= 'n';
                cout<< "do u want to play again press y if yes"<<endl;
                cin>> close;
                continue;
            }
        }



    }

    return 0;
}
