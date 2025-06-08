class StudentDetails{
  void displayDetails(){
    print("Student is from btech department");
  }
}
class Student extends StudentDetails{
  void displayStudent(){
    print("Student name is abc");
  }
}
void main(){
  Student std = Student();
  std.displayDetails();
  std.displayStudent();
}
