--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 3001

CREATE TABLE products (
  id NUMERIC PRIMARY KEY,
  name VARCHAR (50),
  type CHAR,
  price NUMERIC
);


INSERT INTO products(id, name, type, price)
VALUES (1, 'Monitor', 'B', 0),
       (2, 'Headset', 'A', 0),
       (3, 'PC Case', 'A', 0),
       (4, 'Computer Desk', 'C', 0),
       (5, 'Gaming Chair', 'C', 0),
       (6, 'Mouse', 'A', 0);
