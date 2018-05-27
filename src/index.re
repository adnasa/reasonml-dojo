open Fetcher;

let url = "https://immense-river-25513.herokuapp.com/add-location";

/* let fetched = fetchPost(~url, ~body="adnasa")
   Js.log(fetched) */

/* fetchPost(~url, ~body="adnasa") |> Js.log; */

ReactDOMRe.renderToElementWithId(
  <ComposableMap
    projectionConfig={scale: 205, rotation: [|(-11), 0, 0|]}
    width=980
    height=551
    style=(ReactDOMRe.Style.make(~width="100%", ~height="auto", ()))
  />,
  "main",
);
