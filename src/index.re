open Fetcher;

let url = "https://immense-river-25513.herokuapp.com/add-location";

/* let fetched = fetchPost(~url, ~body="adnasa")
   Js.log(fetched) */

fetchPost(~url, ~body="adnasa") |> Js.log;
