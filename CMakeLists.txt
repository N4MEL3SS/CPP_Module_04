cmake_minimum_required(VERSION 3.21)
project(Module_4)

set(CMAKE_CXX_STANDARD 98)
add_compile_options(-Wall -Werror -Wextra)

add_executable(Module_4_ex00 ex00/main.cpp ex00/Animal.cpp ex00/Animal.hpp ex00/Cat.cpp ex00/Cat.hpp ex00/Dog.cpp ex00/Dog.hpp ex00/WrongAnimal.cpp ex00/WrongAnimal.hpp ex00/WrongCat.cpp ex00/WrongCat.hpp)
add_executable(Module_4_ex01 ex01/main.cpp ex01/Brain.cpp ex01/Brain.hpp ex01/Animal.cpp ex01/Animal.hpp ex01/Cat.cpp ex01/Cat.hpp ex01/Dog.cpp ex01/Dog.hpp ex01/WrongAnimal.cpp ex01/WrongAnimal.hpp ex01/WrongCat.cpp ex01/WrongCat.hpp)
add_executable(Module_4_ex02 ex02/main.cpp ex02/Brain.cpp ex02/Brain.hpp ex02/AAnimal.cpp ex02/AAnimal.hpp ex02/Cat.cpp ex02/Cat.hpp ex02/Dog.cpp ex02/Dog.hpp)
add_executable(Module_4_ex03 ex03/main.cpp ex03/AMateria.cpp ex03/AMateria.hpp ex03/ICharacter.hpp ex03/IMateriaSource.hpp ex03/Character.cpp ex03/Character.hpp ex03/Cure.cpp ex03/Cure.hpp ex03/Ice.cpp ex03/Ice.hpp ex03/MateriaSource.cpp ex03/MateriaSource.hpp)
