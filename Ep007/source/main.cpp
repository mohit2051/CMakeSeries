#include<iostream>
#include "dog.h"
#include "operations.h"
#include "log.h"


int main()
{
    //auto value = ((10 <=> 20) > 0);

    double result = add(2,70);
    std::cout<< "result : " << result << std::endl;

    Dog dog1("Flitzy");
    dog1.print_info();

    log_data("Hello there", LogType::FATAL_ERROR);
    
    return 0;
}
