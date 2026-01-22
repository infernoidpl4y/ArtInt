struct Objeto* objeto_nuevo(struct Tipo* tipo) {
 struct Objeto *obj = malloc(tipo->tamano);
 obj->tipo = tipo;
 return obj;
}
