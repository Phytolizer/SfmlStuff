cmake_minimum_required(VERSION 3.12...3.22)
project(SfmlStuff)

find_package(
	SFML REQUIRED
	COMPONENTS system
			   window
			   graphics
)

add_executable(SfmlStuff src/main.cpp)
target_compile_features(SfmlStuff PUBLIC cxx_std_20)
target_link_libraries(
	SfmlStuff
	sfml-system
	sfml-graphics
	sfml-window
)
