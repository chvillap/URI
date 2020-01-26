--- URI Online Judge SQL
--- Copyright URI Online Judge
--- www.urionlinejudge.com.br
--- Problem 2988

CREATE TABLE teams (
  id INTEGER PRIMARY KEY,
  name VARCHAR(50)
);

CREATE TABLE matches (
  id INTEGER PRIMARY KEY,
  team_1 INTEGER REFERENCES teams (id),
  team_2 INTEGER REFERENCES teams (id),
  team_1_goals INTEGER,
  team_2_goals INTEGER
);


INSERT INTO teams(id, name)
VALUES 
      (1, 'CEARA'),
      (2, 'FORTALEZA'),
      (3, 'GUARANY DE SOBRAL'),
      (4, 'FLORESTA');

INSERT INTO matches (id, team_1, team_2, team_1_goals, team_2_goals)
VALUES
      (1, 4, 1, 0, 4),
      (2, 3, 2, 0, 1),
      (3, 1, 3, 3, 0),
      (4, 3, 4, 0, 1),
      (5, 1, 2, 0, 0),
      (6, 2, 4, 2, 1);
  

  /*  Execute this query to drop the tables */
  -- DROP TABLE teams, matches; --
