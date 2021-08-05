Emergency Phone Numbers

You’re the manager for the phone company on board a new space station, 

and you’re trying to assign numbers to various services. 

To increase dialing speed, you want a call to be placed as soon as a valid number is dialed. 

For example, 
    
     if 911 is the number for emergency services
   
     then entering those three digits starts the call immediately, 
  
  so you can’t assign the number 9113 to some other service, 
  
  since anyone trying to dial it would end up calling 911. 
  
  There are n phone services. 
  
  You have statistics for each service from other space stations; 
  
  you know that the ith service is used on average fi times per year. Given f1, . . . , fn, 
  
  you want to assign phone numbers to the services (using only the digits 0–9) 
  
  so that services which are used more often will have shorter numbers. 
  
  In particular, you want to minimize the average number of digits dialed (with the average taken over all calls to a phone service). 
  
  Devise and implement an efficient algorithm for this problem. 
  
    
      Input: Number of services N : s1,s2, … , sn 
      Frequency of services f1, f2, …, fn 
      Output: Phone numbers ↔ services 
      
  (where services which are used most often will have shorter phone numbers)
