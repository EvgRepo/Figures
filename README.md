Вывод нескольких геометрических фигур на экран

Сборка через Visual Studio:
1. Запустить "Developer Command Promt for VS".
2. Перейти в папку с проекта.
3. Собрать проект с помощью "cl App.cpp Circle.cpp Figure.cpp Figures.cpp Quad.cpp Rect.cpp Rhomb.cpp Triangle.cpp /link /out:Figures.exe".

Сборка через GCC
1. Перейти в папку с проекта.
2. Собрать проект с помощью "gcc ./App.cpp ./Circle.cpp ./Figure.cpp ./Figures.cpp ./Quad.cpp ./Rect.cpp ./Rhomb.cpp ./Triangle.cpp -lm -lstdc++ -o ./Figures.exe"
