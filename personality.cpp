#include <stdio.h>
void perfectionist();
void helper();
void achiever();
void individualist();
void observer();
void loyal();
void adventurer();
void challenger();
void peacemaker();
char name[20];
main()
{
	int type[9]={0,0,0,0,0,0,0,0,0},answer,largest,i=0;
	char a;
	printf ("Enter your first name: ");
	scanf ("%s",name);
	printf ("Welcome to the personality test %s. We have 9 different personalities which is also known as enneagram personalities.\n",name);
	printf ("Give your best answer to know about your close fit personality and ways to improve yourself.\n");
	printf ("Press any key to know about the test");
	fflush (stdin);
	scanf ("%c",&a);
	printf ("\n");
    printf ("There are many statements in the test. For each statement,\n");
    printf ("-enter '1' if you totally disagree with the statement\n-enter '2' if you partially disagree with the statement\n");
    printf ("-enter '3' if you neither agree nor disagree with the statement that is for neutral\n");
    printf ("-enter '4' if you partially agree with the statement\n-enter '5' if you totally agree with the statement\n");
    printf ("\n");
    printf ("Now when you know what you need to do. Press any key to begin the test.");
    fflush (stdin);
    scanf ("%c",&a);
    printf ("\n");
    printf ("Lets start: ");
    printf ("\n");
    printf ("I like things to be done or kept in my way.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[0]+=6; type[5]+=2;	}
    else if (answer==4) { type[0]+=4;	}
    else if (answer==3) { type[0]+=1;	}
    else if (answer==2) { type[0]-=2;	}
    else if (answer==1) { type[0]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I put in the effort to make a good impression on other people.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[2]+=5; type[4]-=1; type[1]+=2; type[8]+=1; type[0]-=1;	}
    else if (answer==4) { type[2]+=3; type[1]+=1;	}
    else if (answer==3) { type[2]+=1;	}
    else if (answer==2) { type[2]-=2; type[1]-=1;	}
    else if (answer==1) { type[2]-=3; type[1]-=1;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I can easily adapt between new group of people.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[8]+=6; type[1]+=3; type[4]-=3;	}
    else if (answer==4) { type[8]+=4; type[1]+=1; type[4]-=2;	}
    else if (answer==3) { type[8]+=0;	}
    else if (answer==2) { type[8]-=2; type[1]-=1; type[4]+=1;	}
    else if (answer==1) { type[8]-=3; type[1]-=2; type[4]+=2;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I believe in working very hard and creating my own luck.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[7]+=6;	}
    else if (answer==4) { type[7]+=4;	}
    else if (answer==3) { type[7]+=1;	}
    else if (answer==2) { type[7]-=2;	}
    else if (answer==1) { type[7]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I am never afraid to try new adventures and make changes in life when things get boring.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[6]+=6;	}
    else if (answer==4) { type[6]+=4;	}
    else if (answer==3) { type[6]+=1;	}
    else if (answer==2) { type[6]-=2;	}
    else if (answer==1) { type[6]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I often feel overtaken by my emotions.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[3]+=6;	}
    else if (answer==4) { type[3]+=4;	}
    else if (answer==3) { type[3]+=1;	}
    else if (answer==2) { type[3]-=2;	}
    else if (answer==1) { type[3]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I can hardly say no to anyone.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[1]+=5; type[8]+=2;	}
    else if (answer==4) { type[1]+=3; type[8]+=1;	}
    else if (answer==3) { type[1]+=0;	}
    else if (answer==2) { type[1]-=2;	}
    else if (answer==1) { type[1]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I usually don't get involved in conversations until topics of my interest pops up.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[4]+=6;	}
    else if (answer==4) { type[4]+=4;	}
    else if (answer==3) { type[4]+=0;	}
    else if (answer==2) { type[4]-=2;	}
    else if (answer==1) { type[4]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I often take approvals and advices from people before taking or changing any decisions or plans.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[1]+=5; type[0]-=3; type[7]-=3;	}
    else if (answer==4) { type[1]+=3; type[0]-=2; type[7]-=2;	}
    else if (answer==3) { type[1]+=0;	}
    else if (answer==2) { type[1]-=2;	type[7]+=3; type[7]+=3;  }
    else if (answer==1) { type[1]-=3;	type[7]+=5; type[7]+=5;  }
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like solving conflicts rather than getting involved in one.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[8]+=6;	}
    else if (answer==4) { type[8]+=4;	}
    else if (answer==3) { type[8]+=1;	}
    else if (answer==2) { type[8]-=2;	}
    else if (answer==1) { type[8]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("It is important for me to achieve great things in life and be successful.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[2]+=6; type[3]-=1;	}
    else if (answer==4) { type[2]+=4;	}
    else if (answer==3) { type[2]+=1;	}
    else if (answer==2) { type[2]-=2;	}
    else if (answer==1) { type[2]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I cannot trust any person easily.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[5]+=6; type[4]+=1;	}
    else if (answer==4) { type[5]+=4;	}
    else if (answer==3) { type[5]+=1;	}
    else if (answer==2) { type[5]-=2;	}
    else if (answer==1) { type[5]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I think extensively before speaking about anything to anyone.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[4]+=6; type[3]+=1;	}
    else if (answer==4) { type[4]+=4;	}
    else if (answer==3) { type[4]+=1;	}
    else if (answer==2) { type[4]-=2;	}
    else if (answer==1) { type[4]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I am good at seeing bright side of things when others complain.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[6]+=6;	}
    else if (answer==4) { type[6]+=4;	}
    else if (answer==3) { type[6]+=1;	}
    else if (answer==2) { type[6]-=2;	}
    else if (answer==1) { type[6]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I love to be liked by everyone.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[1]+=5; type[8]+=3; type[3]+=1;	}
    else if (answer==4) { type[1]+=3; type[8]+=2;	}
    else if (answer==3) { type[1]+=1; type[8]+=1;	}
    else if (answer==2) { type[1]-=2; type[8]-=1;	}
    else if (answer==1) { type[1]-=3; type[8]-=2;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I make alliances with people who makes me feel safe and secure.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[5]+=6; type[7]-=2;	}
    else if (answer==4) { type[5]+=4; type[7]-=1;	}
    else if (answer==3) { type[5]+=1;	}
    else if (answer==2) { type[5]-=2;	}
    else if (answer==1) { type[5]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like to analyze things more deeply and from every angle.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[3]+=6;	}
    else if (answer==4) { type[3]+=4;	}
    else if (answer==3) { type[3]+=1;	}
    else if (answer==2) { type[3]-=2;	}
    else if (answer==1) { type[3]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I have many ways of controlling situation that can get me down.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[7]+=6;	}
    else if (answer==4) { type[7]+=4;	}
    else if (answer==3) { type[7]+=1;	}
    else if (answer==2) { type[7]-=2;	}
    else if (answer==1) { type[7]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I am very careful while spending money or resources on anything.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[0]+=6;	}
    else if (answer==4) { type[0]+=4;	}
    else if (answer==3) { type[0]+=1;	}
    else if (answer==2) { type[0]-=2;	}
    else if (answer==1) { type[0]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("The organization I have been involved in would not function well without me.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[2]+=6;	}
    else if (answer==4) { type[2]+=4;	}
    else if (answer==3) { type[2]+=1;	}
    else if (answer==2) { type[2]-=2;	}
    else if (answer==1) { type[2]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like spending hours of time alone dealing with my personal stuffs.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[4]+=6; type[3]+=5; type[6]+=3;	}
    else if (answer==4) { type[4]+=4; type[3]+=3; type[6]+=2;	}
    else if (answer==3) { type[4]+=1; type[3]+=1; type[6]+=1;	}
    else if (answer==2) { type[4]-=2; type[3]-=2;   }
    else if (answer==1) { type[4]-=3; type[3]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("It is hard for me to comit to one thing and give all my attention to a particular thing.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[6]+=6;	}
    else if (answer==4) { type[6]+=4;	}
    else if (answer==3) { type[6]+=1;	}
    else if (answer==2) { type[6]-=2;	}
    else if (answer==1) { type[6]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like to stay away from arguments and conflicts.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[8]+=6; type[4]+=2; type[1]+=2;	}
    else if (answer==4) { type[8]+=4; type[4]+=1; type[1]+=1;	}
    else if (answer==3) { type[8]+=1;	}
    else if (answer==2) { type[8]-=2; type[4]-=1; type[1]-=1;	}
    else if (answer==1) { type[8]-=4; type[4]-=2; type[1]-=2; }
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("My strength, honesty and way of thinking keeps me ahead of average people.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[7]+=6; type[2]+=2;	}
    else if (answer==4) { type[7]+=4; type[2]+=1;	}
    else if (answer==3) { type[7]+=1;	}
    else if (answer==2) { type[7]-=2;	}
    else if (answer==1) { type[7]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("It affects me a lot when I cannot perform well in something I expected to outstand.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[0]+=5; type[2]+=2;	}
    else if (answer==4) { type[0]+=3; type[2]+=1;	}
    else if (answer==3) { type[0]+=0;	}
    else if (answer==2) { type[0]-=2;	}
    else if (answer==1) { type[0]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I cannot tell someone when I think they are wrong.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[1]+=6; type[0]-=3; type[7]-=3; type[2]-=3;	}
    else if (answer==4) { type[1]+=4; type[0]-=1; type[7]-=1; type[2]-=1;	}
    else if (answer==3) { type[1]+=1;	}
    else if (answer==2) { type[1]-=3; type[0]+=1; type[7]+=1;	}
    else if (answer==1) { type[1]-=4; type[0]+=2; type[7]+=2; type[2]+=2;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I have a well thought out mental map of where I want to be in next five years.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[2]+=6; type[3]-=2;	}
    else if (answer==4) { type[2]+=4;	}
    else if (answer==3) { type[2]+=1;	}
    else if (answer==2) { type[2]-=2;	}
    else if (answer==1) { type[2]-=4; type[3]+=2;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I always be on alert to protect myself and my loved ones from any kind of harm.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[5]+=6;	}
    else if (answer==4) { type[5]+=4;	}
    else if (answer==3) { type[5]+=1;	}
    else if (answer==2) { type[5]-=2;	}
    else if (answer==1) { type[5]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like understanding how the world works and why the things are the way they are.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[4]+=6;	}
    else if (answer==4) { type[4]+=4;	}
    else if (answer==3) { type[4]+=1;	}
    else if (answer==2) { type[4]-=2;	}
    else if (answer==1) { type[4]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I feel no one can completely understand me.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[3]+=6; type[4]+=3;	}
    else if (answer==4) { type[3]+=4; type[4]+=2;	}
    else if (answer==3) { type[3]+=1;	}
    else if (answer==2) { type[3]-=2; type[4]-=1;	}
    else if (answer==1) { type[3]-=4; type[4]-=2;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like expressing my wants and needs to other people.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[8]+=6;	}
    else if (answer==4) { type[8]+=4;	}
    else if (answer==3) { type[8]+=1;	}
    else if (answer==2) { type[8]-=2;	}
    else if (answer==1) { type[8]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I have got lot of interests and trying new things keep my life interesting.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[6]+=6;	}
    else if (answer==4) { type[6]+=4;	}
    else if (answer==3) { type[6]+=1;	}
    else if (answer==2) { type[6]-=2;	}
    else if (answer==1) { type[6]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I appreciate having rules that people are expected to follow.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[0]+=6;	}
    else if (answer==4) { type[0]+=4;	}
    else if (answer==3) { type[0]+=1;	}
    else if (answer==2) { type[0]-=2;	}
    else if (answer==1) { type[0]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like helping people and I work hard to be available for others.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[1]+=6; type[8]+=6;	}
    else if (answer==4) { type[1]+=4; type[8]+=4;	}
    else if (answer==3) { type[1]+=1;	}
    else if (answer==2) { type[1]-=2; type[8]-=2;   }
    else if (answer==1) { type[1]-=4; type[8]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I am always aware of what wrong can possibly happen in a situation.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[5]+=6;	}
    else if (answer==4) { type[5]+=4;	}
    else if (answer==3) { type[5]+=1;	}
    else if (answer==2) { type[5]-=2;	}
    else if (answer==1) { type[5]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I stay away from socialization.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[4]+=6; type[1]-=3; type[8]-=3; type[2]-=3;	}
    else if (answer==4) { type[4]+=4; type[1]-=2; type[8]-=2; type[2]-=2;	}
    else if (answer==3) { type[4]+=1;	}
    else if (answer==2) { type[4]-=2; type[1]+=2; type[8]+=2; type[2]+=2;	}
    else if (answer==1) { type[4]-=4; type[1]+=3; type[8]+=3; type[2]+=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
	printf ("I easily get angry.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[7]+=6; type[8]-=4;	}
    else if (answer==4) { type[7]+=4; type[8]-=2;	}
    else if (answer==3) { type[7]+=1;	}
    else if (answer==2) { type[7]-=2;	type[8]+=2;}
    else if (answer==1) { type[7]-=4; type[8]+=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
	printf ("I make more significant contributions than the average person.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[2]+=6; type[7]+=2;	}
    else if (answer==4) { type[2]+=4; type[7]+=1;	}
    else if (answer==3) { type[2]+=1;	}
    else if (answer==2) { type[2]-=2;	}
    else if (answer==1) { type[2]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like teaching and instructing people on what should be done.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[0]+=6;	}
    else if (answer==4) { type[0]+=4;	}
    else if (answer==3) { type[0]+=1;	}
    else if (answer==2) { type[0]-=2;	}
    else if (answer==1) { type[0]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I am a great secret keeper.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[5]+=6;	}
    else if (answer==4) { type[5]+=4;	}
    else if (answer==3) { type[5]+=1;	}
    else if (answer==2) { type[5]-=2;	}
    else if (answer==1) { type[5]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I am unusually unique person.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[3]+=6; type[4]+=6;	}
    else if (answer==4) { type[3]+=4; type[4]+=4;	}
    else if (answer==3) { type[3]+=1;	}
    else if (answer==2) { type[3]-=2; type[4]-=2;	}
    else if (answer==1) { type[3]-=4; type[4]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    printf ("I like trying new approaches to do things.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[6]+=6;	}
    else if (answer==4) { type[6]+=4;	}
    else if (answer==3) { type[6]+=1;	}
    else if (answer==2) { type[6]-=2;	}
    else if (answer==1) { type[6]-=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
     printf ("I make sure that even small details are correct.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[0]+=6; type[5]+=6;	}
    else if (answer==4) { type[0]+=4; type[5]+=4;	}
    else if (answer==3) { type[0]+=1;	}
    else if (answer==2) { type[0]-=2; type[5]-=2;	}
    else if (answer==1) { type[0]-=4; type[5]-=3;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
     printf ("I spend time trying to discover and correct my faults and weaknesses.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[8]+=6; type[4]+=2; type[3]+=1;	}
    else if (answer==4) { type[8]+=4; type[4]+=1;	}
    else if (answer==3) { type[8]+=1;	}
    else if (answer==2) { type[8]-=2;	}
    else if (answer==1) { type[8]-=4; type[4]-=1;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
     printf ("I want people to know me for my true self.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[3]+=6; type[8]+=2;	}
    else if (answer==4) { type[3]+=4; type[8]+=1;	}
    else if (answer==3) { type[3]+=1;	}
    else if (answer==2) { type[3]-=2;	}
    else if (answer==1) { type[3]-=3; type[8]-=1;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
     printf ("Privacy is very important for me.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[4]+=6; type[5]+=6; type[6]+=3; type[3]+=2;	}
    else if (answer==4) { type[4]+=4; type[5]+=4; type[6]+=2; type[3]+=1;	}
    else if (answer==3) { type[4]+=1; type[5]+=1;	}
    else if (answer==2) { type[4]-=2; type[5]-=2;	}
    else if (answer==1) { type[4]-=4; type[5]-=4; type[6]-=2;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
     printf ("I persist until my work or a task is done.\n");
    printf ("1 / 2 / 3 / 4 / 5 \nEnter your answer: ");
    do {
    scanf ("%d",&answer);
    i=0;
    if (answer==5) { type[7]+=6; type[6]-=3;	}
    else if (answer==4) { type[7]+=4; type[6]-=2;	}
    else if (answer==3) { type[7]+=1;	}
    else if (answer==2) { type[7]-=2; type[6]+=2;	}
    else if (answer==1) { type[7]-=3; type[6]+=4;	}
    else { printf ("You have entered a wrong key. Please re-enter your answer: "); i=1;	} }
    while (i==1);
    printf ("\n");
    largest=type[0];
    for (i=1;i<9;i++){
        if (largest<type[i])
		    {largest=type[i];}}
    if (largest==type[0])
	    { perfectionist(); } 
	else if (largest==type[1])
	    { helper(); }
	else if (largest==type[2])
	    { achiever(); }
	else if (largest==type[3])
	    { individualist(); }
	else if (largest==type[4])
	    { observer(); }
	else if (largest==type[5])
	    { loyal(); }
	else if (largest==type[6])
	    { adventurer(); }
	else if (largest==type[7])
	    { challenger(); }
	else if (largest==type[8])
	    { peacemaker(); }
	
}
void perfectionist()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The perfectionist\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\perfectionist.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}
void helper()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The helper\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\helper.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}
void achiever()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The achiever\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\achiever.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}
void individualist()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The individualist\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\individualist.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}
void observer()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The observer\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\observer.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}
void loyal()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The loyal\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\loyal.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}
void adventurer()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The adventurer\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\adventurer.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}
void challenger()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The challenger\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\challenger.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}
void peacemaker()
{
	FILE *f1;
	char c,a;
	printf ("Hey %s, according to your answers your enneagram personality type is: The peacemaker\n",name);
	printf ("Enter any key to know about your type of personality: ");
	fflush (stdin);
	scanf ("%c",&a);
	f1 = fopen ("D:\\peacemaker.txt","r");
	if (f1==NULL) {
		printf ("Cannot open the file."); }
	while ((c=fgetc(f1)) != EOF) {
		putchar(c); }
	fclose(f1);
}