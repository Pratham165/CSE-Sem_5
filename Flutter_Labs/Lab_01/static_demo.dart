class StaticDemo{
  static List<String> details = ["Pratham"];
  void add(String data){
    details.add(data);
  }
}
class DisplayList{
  void displayList(){
    print(StaticDemo.details);
  }
}
void main(){
  StaticDemo std1 = StaticDemo();
  StaticDemo std2 = StaticDemo();
  std1.add("Modi");
  std2.add("Rajkot");
  DisplayList dis = DisplayList();
  dis.displayList();
}