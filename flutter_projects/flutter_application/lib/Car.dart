

class Car{
  final String brand;
  final String model;
  final int year;
  final String color;

  const Car({required this.brand, required this.model, required this.year, required this.color});

}


void displayInfo(Car car) {
  print("Brand: ${car.brand}");
  print("Model: ${car.model}");
  print("Year: ${car.year}");
  print("Color: ${car.color}");
}


void main() {
  Car car1 = Car("Audi", "A5", 2010, "Black");
  var test = Car();
  displayInfo(car1);

}