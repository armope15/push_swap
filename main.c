#include<unistd.h>
#include<stdlib.h>

int parse_arguments(int number, char **arguments){
    if (number < 2)
        return (0);
    if (number == 2)
        return (1);
    if (number > 2)
        return (2);
}

int main(int argc , char **argv){

 if(parse_arguments(argc , argv) == 1){
    return (1);
 }else{
    return (0);
 }


}

