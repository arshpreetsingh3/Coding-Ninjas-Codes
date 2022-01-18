class ComplexNumbers {
    // Complete this class
  
  private:
    int real;
    int imaginary;
  public:
     
    
    		ComplexNumbers(int real,int imaginary)
            {
              this->real=real;
              this->imaginary=imaginary;
            }
  /*
        	ComplexNumbers(int real2,int imaginary2)
            {
              this->real2=real2;
              this->imaginary2=imaginary2;
            } */
            
    void plus(ComplexNumbers c2)
    {
      this->real=this->real+c2.real;
      this->imaginary=this->imaginary+c2.imaginary;
    }
     void multiply(ComplexNumbers c2)
     {
              int temp = this->real;
       this->real=(this->real*c2.real)-(this->imaginary*c2.imaginary);

       this->imaginary=(temp*c2.imaginary)+(this->imaginary*c2.real);
     }
  
    void print()
    {
      cout<<this->real<<" "<< "+"<<" "<<"i"<<this->imaginary<<endl;
    }
}; 