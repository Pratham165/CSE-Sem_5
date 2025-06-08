class Student{
  String name = "Pratham";
  int roll_no = 338;
  void display(){
    print(name);
    print(roll_no);
  }
}
void main(){
  Student std = Student();
  std.display();
}