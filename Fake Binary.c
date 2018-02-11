void fakeBin(const char *digits, char *buffer) {
  // Please place result in the memory pointed to by
  // the buffer parameter. Buffer has enough memory to
  // accommodate the answer as well as the null-terminating
  // character.
  
  for(int i=0;i<strlen(digits);i++){
    
    int tempNum = digits[i] - '0';
    
    if(tempNum<5){
      buffer[i] = '0';
    }
    else{
      buffer[i] = '1';
    }
    
    
  }
  
  buffer[strlen(digits)] = '\0';
  
} 