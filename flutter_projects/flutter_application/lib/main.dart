import 'package:flutter/material.dart';


abstract class Animal {
  void makeSound() {
  }
}

  class Cat extends Animal {
    @override
    void makeSound() {
      print("Meow");
    }
  }

class Dog extends Animal {
  @override
  void makeSound() {
    print("Wuff");
  }
}

class Bird extends FlyingAnimal {
  @override
  void makeSound() {
    print("Chirp");
  }
}

class Fish extends Animal {
  @override
  void makeSound() {
    print("blub");
  }
}


abstract class FlyingAnimal extends Animal {
  void flying() {
    print("I can fly");
  }
}

class flying extends Animal {
  @override
  void makeSound() {
    print("I can fly");
  }
}


  void main() {
    Animal dog = Dog();
    dog.makeSound();
    Animal cat = Cat();
    cat.makeSound();
    Animal bird = Bird();
    bird.makeSound();
    if (bird is FlyingAnimal) {
      bird.flying();
    }



  }
