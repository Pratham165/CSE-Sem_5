class StudentDetails{
  void displayDetails(){
    print("Student is from btech department");
  }
}
class Student extends StudentDetails{
  @override
  void displayDetails(){
    print("Student is from btech department and Student name is abc");
  }
}
void main(){
  Student std = Student();
  std.displayDetails();
}
