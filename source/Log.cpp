#include "LOG.h"

void LOG_ERROR (char *t){
    LOG_ERROR ((char*)"ERROR: ", t);
}


void LOG_ERROR  (char *p=(char*)"ERROR: ", char *t = (char*)""){
    FILE        *f ;                
    time_t      timer;              
    struct  tm *current;               
    char    c[200];                 
    time(&timer);                   
    current = localtime(&timer);    
    f = fopen("errlog.log","a");    
    if (f)                         
        {                           
          sprintf(c , "[%02i/%02i/%04i : %02i:%02i:%02i] ", current->tm_mday , current->tm_mon +1 ,  1900 + current->tm_year , current->tm_hour , current ->tm_min , current->tm_sec  );
          fprintf(f , "%s",c);
          fprintf(f,  "%s%s",p,t);
          fclose(f);
        }
}
