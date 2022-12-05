CREATE TABLE vehiculo(
tablilla_pk			VARCHAR2(10),
tipo_carro			VARCHAR2(1),
cantidad_ejes		NUMBER(2),
marca				VARCHAR2(15),
modelo				VARCHAR2(15),
color				VARCHAR2(8),
CONSTRAINTS tablilla_pk PRIMARY KEY(tablilla_pk));

CREATE TABLE municipio(
id_municipio_pk		NUMBER(4),
nombre				VARCHAR2(15),
CONSTRAINTS id_municipio_pk PRIMARY KEY(id_municipio_pk));

CREATE TABLE peaje(
id_peaje_pk			number(4),
nombre				VARCHAR2(10),
localizacion		VARCHAR2(10),
direccion_linea_1	VARCHAR2(15),
direccion_linea_2	VARCHAR2(15),
ciudad				VARCHAR2(10),
pais				VARCHAR2(15),
zip_code			NUMBER(7),
tipo_peaje			VARCHAR2(10),
id_municipio_fk		number(4),
CONSTRAINTS id_peaje_pk PRIMARY KEY(id_peaje_pk),
CONSTRAINTS id_municipio_fk FOREIGN KEY(id_municipio_fk) REFERENCES municipio(id_municipio_pk));

CREATE TABLE cobro(
id_peaje_pk_fk1		NUMBER(4),
id_tablilla_pk_fk2	NUMBER(4),
fecha				DATE - format YYYY-MM-DD,
tarifa				NUMBER(6),
CONSTRAINTS id_peaje_pk_fk1 FOREIGN KEY(id_peaje_pk_fk1) REFERENCES peaje(id_peaje_pk),
CONSTRAINTS id_tablilla_pk_fk2 FOREIGN KEY(id_tablilla_pk_fk2) REFERENCES vehiculo(tablilla_pk));

CREATE TABLE carril(
id_carril_pk		NUMBER(4),
tipo_carril			VARCHAR2(10),
id_peaje_fk			NUMBER(4),
CONSTRAINTS id_carril_pk PRIMARY KEY(id_carril_pk),
CONSTRAINTS id_peaje_fk	 FOREIGN KEY(id_peaje_fk) REFERENCES peaje(id_peaje_pk));
