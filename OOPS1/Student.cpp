
class Student {

	public :

	int rollNumber;
	
	private :

	int age;


	public :
    //default constructor
    Student(){
        cout<<" const called "<<endl;
        cout<< "this " << this <<endl;
    }
    //Parametrized constructor
    Student(int r){
        cout <<" not default constructor as it has one argument"<<endl;
        cout<< "this " << this <<endl;
        this->rollNumber = r;
    }

     Student(int a,int r){
        cout <<" not default constructor as it has two argument"<<endl;
        cout<< "this " << this <<endl;
        age =a;
        rollNumber = r;
    }
	void display() {
		cout << age << " " << rollNumber << endl;
	}

	int getAge() {
		return age;
	}

	void setAge(int a) {
	
		if(a < 0) {
			return;
		}
		age = a;
	}

};

//why are private properties made ?
//we need to change the functions of this class only to make a change in that property 
//if we want to add some sonctraints 
//like age should not be negative 
//if it was public anyone would have changed the value 
//thus as now its private it needs to be changed using the public function
//and can various constraints