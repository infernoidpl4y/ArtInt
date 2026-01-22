struct Objeto{
    OBJECT
}

struct Tipo{
    OBJECT
    char* nombre;
    void (*mostrar)(struct Objeto*);
    void (*sumar)(struct Objeto*, struct Objeto*);
}