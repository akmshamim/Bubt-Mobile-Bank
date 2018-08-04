// Group Name : Simple Software Developer (SSD)
// Group Member : Md. Shamim Hossain, Md. Hadisur Rahman Hadi & Asim Sarker
// project name :Bubt_Mobile_Bank
// project leader name : Md. Shamim Hossain
// date : 10.04.2017
#include<stdio.h>
int desgin();  // complete
int menu_ber(int number); // complete
int send_money();  // complete
int airtime(int); // complete
int airtime_desgin(); // complete
int payment();    //complete
int cash_out(int count);   //complete
int cash_out_desgin(); //complete
int my_Bubt_Mobile_Bank(int);    //20% complete
int my_Bubt_Mobile_Bank_desgin();//complete
int help_line(); //complete
int return_exit(); //complete

int main(){    // main function
 	int number;
	while(1)
        {
            desgin();
            printf("\n\n\nChoose your select number :");
            scanf("%d",&number);
            system("cls");
            menu_ber(number);
            if(number==00){break;}
	 	}
	return 0;
}
//----------------------------desgin--------------------------------
int desgin(){
    system("cls");
    printf("\n----------");
	printf("Bubt_Mobile_Bank");
    printf("----------\n");
    printf("\n 01. Send money\n");
    printf(" 02. Airtime\n");
    printf(" 03. Payment\n");
    printf(" 04. Cash In\n");
    printf(" 05. Cash Out\n");
    printf(" 06. My Bubt_Mobile_Bank\n");
    printf(" 07. Help line\n");

    printf("\n------------------------------------");
}

//----------------------------menu_bar--------------------------------
int menu_ber(int number)
{
	 switch(number)
	 {
	 	case 01 :
	 	    {
                printf("\n\n\n-----Send money-----\n");
                send_money();
                break;
            }
		 case 02 :
		     {
                printf("\n\n\n-----airtime-----\n");
                airtime_desgin();
                break;
            }
		 case 03 :
		     {
                printf("\n\n\n-----payment-----\n");
                payment();
                break;
            }
		 case 04 :
		     {
                printf("\n\n\n-----cash_In-----\n");
                int pay,total_pay;
                FILE *fp;
                FILE *show;

                show=fopen("cash_In.txt","r+");
                fscanf(show,"%d",&total_pay);

                 fp=fopen("cash_In.txt","w+");
                printf("\n\n\nPay the amount of money: ");
                scanf("%d",&pay);

                 total_pay+=pay;
                 fprintf(fp,"%d",total_pay);
                 fclose(fp);
                 fclose(show);
                 printf("\n Cash in Tk %d to 01774787121 successfull.\n free tk 00.00.Balance tk %d\n TrixID 0124\n at date(10/04/2017 9:12)\n",pay,total_pay);
                  return_exit();
                break;
            }
		 case 05 :
		     {
                printf("\n\n\n-----cash_out-----\n");
                cash_out_desgin();
                break;
            }
		 case 06 :
		     {
                printf("\n\n\n-----my_Bubt_Mobile_Bank-----\n");
                my_Bubt_Mobile_Bank_desgin();
                break;
            }
		 case 07 :
		     {
                printf("\n\n\n-----help_line-----\n");
                help_line();
                break;
             }
	 }
}

int send_money()
{
    int amount,Bubt_Mobile_Bank_account,pin,total_amount,new_pin;
    char ref[10];
    FILE *fp;
    FILE *pass;
    FILE *balance;
	printf("\n\n\n Enter the Bubt_Mobile_Bank Account Number:");
	scanf("%d",&Bubt_Mobile_Bank_account);
	system("cls");
    printf("\n\n\n-----Send money-----\n");
	printf("\n\n\n Enter the amount:");
	scanf("%d",&amount);
	system("cls");
    printf("\n\n\n-----Send money-----\n");
	printf("\n\n\n Enter a reference about the transaction:");
	scanf("%s",ref);
	system("cls");
    printf("\n\n\n-----Send money-----\n");
	printf("\n\n\n Enter your Bubt_Mobile_Bank Mobile Menu PIN:");
	scanf("%d",&pin);
	system("cls");
	printf("\n\n\n-----Payment-----\n");
	pass=fopen("password.txt","r+");
	fscanf(pass,"%d",&new_pin);
	if(new_pin==pin)
        {
            fp=fopen("cash_In.txt","r+");
            fscanf(fp,"%d",&total_amount);
            fclose(pass);
            if(total_amount>=amount)
            {
                total_amount-=amount;
                balance=fopen("cash_In.txt","w+");
                fprintf(balance,"%d",total_amount);
                fclose(balance);
                fclose(fp);
                printf("\n\tSend Amount:%d\n",amount);
                printf("\n\tTotal Amount:%d\n",total_amount);
                printf("\n Send Money Successfull\n");
                return_exit();
            }
            else
            {
                printf("\n Your Balance is insufficient\n");
                return_exit();
            }

        }
	else
        {
            system("cls");
            printf("\t Your Pin is Wrong.\n Check Your Pin and Try again...\n");
            return_exit();
        }
}
int payment()
{
	int amount,Bubt_Mobile_Bank_account,pin,total_amount,new_pass;
	char ref[10];
	FILE *fp;
	FILE *pass;
	FILE *balance;
	system("cls");
	printf("\n\n\n-----Payment-----\n");
	printf("\n\n\nEnter the Bubt_Mobile_Bank Account Number:");
	scanf("%d",&Bubt_Mobile_Bank_account);
	system("cls");
	printf("\n\n\n-----Payment-----\n");
	printf("\n\n\nEnter the amount:");
	scanf("%d",&amount);
	system("cls");
	printf("\n\n\n-----Payment-----\n");
	printf("\n\n\nEnter a reference about the transaction:");
	scanf("%s",ref);
	system("cls");
	printf("\n\n\n-----Payment-----\n");
	printf("\n\n\nEnter the Bubt_Mobile_Bank Account Number:%d\nEnter the amount:%d\nEnter a reference about the transaction:%s\n",Bubt_Mobile_Bank_account,amount,ref);
	printf("\n\n\nEnter your Bubt_Mobile_Bank Mobile Menu PIN:");
	scanf("%d",&pin);
	system("cls");
	printf("\n\n\n-----Payment-----\n");
	pass=fopen("password.txt","r+");
	fscanf(pass,"%d",&new_pass);
	if(new_pass==pin)
        {
            fp=fopen("cash_In.txt","r+");
            fscanf(fp,"%d",&total_amount);
            fclose(pass);
            if(total_amount>=amount)
            {
                total_amount-=amount;
                balance=fopen("cash_In.txt","w+");
                fprintf(balance,"%d",total_amount);
                fclose(balance);
                fclose(fp);
                printf("\n\tSend Amount:%d\n",amount);
                printf("\n\tTotal Amount:%d\n",total_amount);
                printf("\n Payment Successfull\n");
                return_exit();
            }
            else
            {
                printf("\n Your Balance is insufficient\n");
                return_exit();
            }

        }
    else
        {
            printf("\t Your Pin is Wrong.\n Check Your Pin and Try again...\n");
            return_exit();
        }
}
int airtime_desgin()
{
      int count;
	  printf("\n 01.GP\n");
      printf(" 02.Airtle\n");
      printf(" 03.Robi\n");
      printf(" 04.Bangalink\n");
	  printf("\n\n Choose your select number :");
	  scanf("%d",&count);
	  airtime(count);
}
//---------------------- airtime full processing-------------------------
int airtime(int count)
{
	int phone_number,password,amount,total_amount,new_password;
	FILE *fp;
	FILE *balance;
	FILE *pass;
	pass=fopen("password.txt","r+");
	fscanf(pass,"%d",&new_password);
	system("cls");
	printf("\n\n\n-----Airtime-----\n");
	printf("\n\n\nEnter the phone number:");
	scanf("%d",&phone_number);
	system("cls");
	printf("\n\n\n-----Airtime-----\n");
	printf("\n\n\nEnter the Ammount (tk):");
	scanf("%d",&amount);
	system("cls");
	printf("\n\n\n-----Airtime-----\n");
	printf("\n\n\nEnter the Pin number");
	scanf("%d",&password);
	system("cls");
	printf("\n\n\n-----Airtime-----\n");
	if(password==new_password)
        {
            fp=fopen("cash_In.txt","r+");
            fscanf(fp,"%d",&total_amount);
            if(total_amount>=amount)
                {
                    total_amount-=amount;
                    balance=fopen("cash_In.txt","w+");
                    fprintf(balance,"%d",total_amount);
                    fclose(balance);
                    fclose(fp);
                    printf("\n\n Your Faxiload Successfull %d taka.\n",amount);
                    return_exit();
                }
		else
            {
                printf("\n not more money!\n");
                return_exit();
            }
        }
	else
        {
            printf("\t Your Pin is Wrong.\n Check Your Pin and Try again...\n");
            return_exit();
        }
}

int cash_out_desgin()
{
	int count;
	system("cls");
	printf("\n\n\n-----Cash Out-----\n");
    printf("\n\n\n 01.From agent\n");
    printf(" 02.From ATM\n");
    printf(" 00.Menu\n");
    printf("\n\n Choose your select number :");
    scanf("%d",&count);
    cash_out(count);
}

int cash_out(int count)
{
	switch (count)
	{
		case 01:{
			int agent_number,cash_money,pass,new_pass,total_amount;
			float charge,balance;
			FILE *password;
			FILE *balance_t;
			FILE *fp;
			password=fopen("password.txt","r+");
			fscanf(password,"%d",&new_pass);
			system("cls");
            printf("\n\n\n-----Cash Out-----\n");
			printf("\n\n\nEnter agent's Bubt_Mobile_Bank account number :");
			scanf("%d",&agent_number);
			system("cls");
            printf("\n\n\n-----Cash Out-----\n");
			printf("\n\n\nEnter the amount:");
			scanf("%d",&cash_money);
			system("cls");
            printf("\n\n\n-----Cash Out-----\n");
			printf("\n\n\nTo account number %d Amount %d tk",agent_number,cash_money);
			printf("\n\n\nEnter the Bubt_Mobile_Bank Mobile Menu pin:");
			scanf("%d",&pass);
			system("cls");
            printf("\n\n\n-----Cash Out-----\n");

			if(new_pass==pass)
                {
                    fp=fopen("cash_In.txt","r+");
                    fscanf(fp,"%d",&total_amount);
                    fclose(password);
                    charge=(cash_money*18.5)/1000;
                     balance=total_amount-(cash_money+charge);
                     if(cash_money<=total_amount)
                     {
                         balance_t=fopen("cash_In.txt","w+");
                        fprintf(balance_t,"%d",total_amount);
                        fclose(balance_t);
                        fclose(fp);
                        printf("\n Cash Out tk %d to %d\n",cash_money,agent_number);
                        printf("Free tk %.2f\n",charge);
                        printf("Balance tk %.2f TrxID 01234\n",balance);
                        printf("at date(12/1/16 9:12)\n");
                        return_exit();
                     }
                    else
                    {
                        printf("\n Your Balance is insufficient\n");
                        return_exit();

                    }
        }
			else
            printf("\t Your Pin is Wrong.\n Check Your Pin and Try again...\n");
			return_exit();
		}
		case 02:
		    {
		        system("cls");
                printf("\n\n\nSorry, This Service is Not Running\n");
                return_exit();
            }
		case 00:
		    {
                break;
            }
	}
}
//--------------------my_Bubt_Mobile_Bank_desgin------------------------------------
int my_Bubt_Mobile_Bank_desgin()
{
	int count;
    system("cls");
    printf("\n\n\n-----My Bubt Mobile Bank-----\n");
    printf("\n\n\n 01. check balance\n");
    printf(" 02. Change mobile menu pin\n");
    printf(" 03. activete ATM\n");
    printf(" 04. Change ATM pin\n");
    printf(" 00. Menu	\n");
    printf("\n\n Choose your select number :");
    scanf("%d",&count);
    my_Bubt_Mobile_Bank(count);
}

//---------------my_Bubt_Mobile_Bank processing-----------------------------------------
int my_Bubt_Mobile_Bank(int count)
{
	switch (count){
		case 01:{
			int pass,total_amount,new_pass;
			FILE *fp;
			FILE *password;
			system("cls");
            printf("\n\n\n-----My Bubt Mobile Bank-----\n");
			printf("\n------- Check balance ---------------\n");
            password=fopen("password.txt","r+");
            fscanf(password,"%d",&new_pass);
            system("cls");
            printf("\n\n\n-----My Bubt Mobile Bank-----\n");
            printf("Enter the pin number:");
            scanf("%d",&pass);
            system("cls");
            printf("\n\n\n-----My Bubt Mobile Bank-----\n");
            if(new_pass==pass)
                {
                    fp=fopen("cash_In.txt","r+");
                    fscanf(fp,"%d",&total_amount);
                    printf("\nyour current Bubt_Mobile_Bank account balance is tk %d.\n your avielavel Bubt_Mobile_Bank account balance tk%d.\n",total_amount,total_amount);
                    return_exit();
                }
			   else
                {
			   		printf("\n\n your Password is Wrong.....\n");
			   		return_exit();
                }
			break;
		}
		case 02:
		    {
                int pass,new_pass;
                FILE *password;
                system("cls");
                printf("-----------------Change mobile menu pin----------------\n");
                password=fopen("password.txt","r+");
                fscanf(password,"%d",&new_pass);
                system("cls");
                printf("Enter the pin number :");
                scanf("%d",&pass);
                if(new_pass==pass)
                    {
                        printf("OK\n");
                        system("cls");
                        printf("change your new password:");
                        scanf("%d",&new_pass);
                        password=fopen("password.txt","w+");
                        fprintf(password,"%d",new_pass);
                        printf("Password:%d",new_pass);
                        fclose(password);
                    }
                else
                    {
                        printf("Enter the pin number Wrong\n");
                    }
                    break;
		}
		case 03:
		    {
		        system("cls");
                printf("\n---------------------activete ATM-------------------\n");
                printf("\n\n\nSorry, This Service is Not Running\n");
                return_exit();
            }
		case 04:
		    {
            printf("\n---------------------Change ATM pin-------------------\n");
			printf("\n\n\nAt First Active ATM and Try Again Later.\n");
			return_exit();
            }
		case 00:
		    {
                break;
            }
	}
}

int help_line()
{
	printf(" #.Send money :\n\n");
	printf("\t01.Go to your Bubt_Mobile_Bank Mobile Menu by dialing *247#\n");
	printf("\t02.Choose Send Money\n");
	printf("\t03.Enter the Bubt_Mobile_Bank Account Number you want to send money to\n");
	printf("\t04.Enter the amount you want to send\n");
	printf("\t05.Enter a reference about the transaction.\n");
	printf("\t06.Now enter your Bubt_Mobile_Bank Mobile Menu PIN to confirm the transaction \n\n");

	printf(" #.cash_In :\n\n");
	printf("\t01.Go to any Bubt_Mobile_Bank Agent\n");
	printf("\t01.Let the Agent know the amount you want to Cash In\n");
	printf("\t03.Write down your Bubt_Mobile_Bank Account Number.\n");
	printf("\t04.Pay the amount of money you want to Cash In\n");
	printf("\t05.In exchange, the Agent will send balance to your Bubt_Mobile_Bank Account.\n\n");

	printf(" #.cash_Out :\n\n");
	printf("\t01.Go to your Bubt_Mobile_Bank Mobile Menu by dialing *247#\n");
	printf("\t02.Choose Cash Out\n");
	printf("\t03.Choose “From Agent”\n");
	printf("\t04.Enter Agent’s Bubt_Mobile_Bank Account Number (ask the Agent)\n");
	printf("\t05.Enter the amount\n");
	printf("\t06.Enter your Bubt_Mobile_Bank Mobile Menu PIN\n\n");

	printf(" #.Airtime:\n\n");
	printf("\t01.Go to your Bubt_Mobile_Bank Mobile Menu by dialing *247#\n");
	printf("\t02.Choose Buy Airtime\n");
	printf("\t03.Choose your operator\n");
	printf("\t04.Choose your connection type\n");
	printf("\t05.Enter the 11 digit mobile number you want to buy airtime for\n");
	printf("\t06.Enter the amount of airtime you want to buy\n");
	printf("\t07.Enter your Bubt_Mobile_Bank Mobile Menu PIN to confirm\n\n");

	printf(" #.My Bubt_Mobile_Bank :\n\n");
	printf("\t01.Go to your Bubt_Mobile_Bank Mobile Menu by dialing *247#\n");
	printf("\t02.Choose Send Money\n");
	printf("\t03.Enter the Bubt_Mobile_Bank Account Number you want to send money to\n");
	printf("\t04.Enter the amount you want to send\n");
	printf("\t05.Enter a reference about the transaction.\n");
	printf("\t06.Now enter your Bubt_Mobile_Bank Mobile Menu PIN to confirm the transaction\n\n");
	return_exit();
}
int return_exit()
{
    int i;
    wrong_key:
    printf("\n\n1. Main Menu.");
    printf("\n2.Exit.");
    printf("\n\nChoose your select number :");
    scanf("%d",&i);
    if(i==1)
        {
            main();
        }
    else if(i==2)
        {
            exit(0);
        }
    else
        {
            printf("\nWrong Key.....");goto wrong_key;
        }
}
