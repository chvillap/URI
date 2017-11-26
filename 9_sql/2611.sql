-- https://www.urionlinejudge.com.br/judge/en/problems/view/2611

select movies.id, movies.name
from movies
    inner join genres
    on movies.id_genres = genres.id
where genres.description = 'Action';
