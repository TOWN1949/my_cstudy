#include<iostream>
#include<cstring>
char*getname(void);
int main()
{
    std::cout<<"enter your first name:"<<std::endl;
    char * name1=getname();
    std::cout<<"enter your last name:"<<std::endl;
    char * name2=getname();
    std::cout<<"your name is:"<<name1<<" "<<name2<<std::endl;



    return 0;
}

char *getname(void)
{
    char temp[80];
    std::cin.getline(temp,80);
    char *p=new char[(strlen(temp)+1)];
    strcpy(p,temp);
    return p;
    delete []p;
}
