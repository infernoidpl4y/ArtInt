struct Objeto{
    OBJECT
}

struct Tipo{
    OBJECT
    char* nombre;
    void (*mostrar)(struct Objeto*);
    void (*sumar)(struct Objeto*, struct Objeto*);
}

struct Numero{
    OBJECT
    int valor;
}

struct Texto{
    OBJECT
    char* contenido;
}