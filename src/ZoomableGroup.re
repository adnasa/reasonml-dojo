[@bs.deriving abstract]
type jsProps = {
  center: array(int),
  disablePanning: bool,
};

type reactSimpleMapsExport = {
  [@bs.as "ZoomableGroup"]
  /* F2 to rename */
  zoomableGroup: ReasonReact.reactClass,
};

[@bs.module]
external myReactSimpleMaps : reactSimpleMapsExport = "react-simple-maps";

let make = (~center, ~disablePanning, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=myReactSimpleMaps.zoomableGroup,
    ~props=jsProps(~center, ~disablePanning),
    children,
  );
