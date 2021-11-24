# 13

## #1 (0.1)

Аргументом командной строки передаётся строка, описывающая перемещение по полю. Она имеет вид `DCDCDС...DС`, где каждая пара `DC` - команда, задающая движение в направлении, задаваемом символом `C` на число шагов, задаваемое числом `D`.

Необходимо минимизировать данную строку до двух команд, т.е. до вида`DCDC`.

### Пример

```
$ task-1.exe 7N12E5S19W20E
2N13E
```

`7N12E5S19W20E` - 7 на север, 12 на восток, 5 на юг, 19 на запад, 20 на восток

## #2 (0.2)

Аргументом командной строки передаётся натуральное число `K` не превосходящее `1'000'000`. Сгенерируйте `K` случайных целых чисел из диапазона `[0, RAND_MAX]`. Подсчитайте частоту появления чисел, у которых остаток от деления на 10  равен 2, 3, 4, ..., 9. Выведите гистограму произвольного вида, отображающую эти данные.

### Пример

```
$ task-2.exe 205
2: ))))))))))
3: )))))))
4: ))))))
5: )))))
6: ))))
7: ))
8: )))))
9: ))
```

Пример лишь даёт общее представление в каком виде необходимо оформить вывод. Вывод вашей программы не должен быть в точности таким-же, как показано в примере.

## #3 (0.3)

Аргументом командной строки передаётся число `T` из диапазона `[1, 84]` и число `Q` из диапазона `[1, 1'000'000'000]`.

Выведите 4 натуральных числа `A`, `B`, `C`, `D` такие, что:

* `A` - минимальное натуральное число, сумма цифр которого равно `T`
* `B` - минимальное натуральное число, произведение цифр которого равно `Q`

* `C` - максимальное число из диапазона `[1, 2^32 - 1]`, сумма цифр которого равна `T`
* `D` - максимальное число из диапазона `[1, 2^32 - 1]`, произведение цифр которого равно `Q`

Если какого-то из чисел не существует - сообщите об этом.

### Пример

```
$ task-3.exe 12 107
A: 39
B: doesn't exist
C: 3111111111
D: doesn't exist
```

Числа `C` и `D` в данном случае не существуют, поскольку число `Q = 107` простое.

## #4 (0.4)

Реализуйте свою структуру данных "список" для хранения строк.

Должны быть реализованы следующие функции:

* добавление элемента в конец списка
* удаление произвольного элемента из списка
* поиск элемента в списке
* получение размера списка
* вывод всего списка

Реализуйте программу, демонстрирующую работу вашего списка.

## #5 (0.5)

Аналогично **#4**, но структура данных "двусвязный список".