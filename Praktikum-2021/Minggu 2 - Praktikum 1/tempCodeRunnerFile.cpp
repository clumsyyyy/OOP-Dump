{
    for (int i = BigNumber::getMaxDigit() - 1; i >= 0; i--){
      if (this->digit[i] < other[i] && this->digit[i