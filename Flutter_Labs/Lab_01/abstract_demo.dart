abstract class Student{
  void displayDetails();
}
class StudentDetails extends Student{
  void displayDetails(){
    print("Student name is abc");
  }
}
void main(){
  StudentDetails std = StudentDetails();
  std.displayDetails();
}