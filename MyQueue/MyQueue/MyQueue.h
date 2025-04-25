#pragma once
#include <cstddef> // Для size_t
#include <cstdlib>  // Для malloc, free

class Queue {
private:
    void** data;      // Массив будет динамический
    size_t head;       // Индекс начала очереди
    size_t tail;       // Индекс конца очереди
    size_t size;       // Текущее количество элементов в очереди
    size_t capacity;   // Максимальное количество элементов, которое может хранить очередь

public:
    // Конструктор
    Queue(size_t capacity);

    // Деструктор
    ~Queue();

    // Добавление элемента в очередь
    bool enqueue(void* item);

    // Удаление элемента из очереди
    void* dequeue();

    // Получение первого элемента очереди (без удаления)
    void* peekFront() const;

    // Получение последнего элемента очереди (без удаления)
    void* peekBack() const;

    // Проверка, пуста ли очередь
    bool isEmpty() const;

    // Проверка, заполнена ли очередь
    bool isFull() const;

    // Получение размера очереди
    size_t getSize() const;

    // Получение вместимости очереди
    size_t getCapacity() const;
};
