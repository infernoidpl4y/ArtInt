struct Objeto* objeto_nuevo(struct Tipo* tipo) {
 struct Objeto *obj = malloc(tipo->tamano);
 obj->tipo = tipo;
 obj->CONTADOR_USO = 1;
 return obj;
}
