-- https://www.urionlinejudge.com.br/judge/en/problems/view/2612

select distinct movies.id, movies.name
from movies
    inner join movies_actors
    on movies.id = movies_actors.id_movies
    inner join actors
    on actors.id = movies_actors.id_actors
    inner join genres
    on movies.id_genres = genres.id
where actors.name in ('Marcelo Silva', 'Miguel Silva')
    and genres.description = 'Action';
