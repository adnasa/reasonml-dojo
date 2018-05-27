type projectionConfigType = {
  scale: int,
  rotation: array(int),
};

/* type styleType = {
     width: string,
     height: string,
   }; */

[@bs.deriving abstract]
type jsProps = {
  projectionConfig: projectionConfigType,
  width: int,
  height: int,
  style: ReactDOMRe.Style.t,
};

type reactSimpleMapsExport = {
  [@bs.as "ComposableMap"]
  /* F2 to rename */
  composableMap: ReasonReact.reactClass,
};

[@bs.module]
external myReactSimpleMaps : reactSimpleMapsExport = "react-simple-maps";

let make = (~projectionConfig, ~width, ~height, ~style, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=myReactSimpleMaps.composableMap,
    ~props=jsProps(~projectionConfig, ~width, ~height, ~style),
    children,
  );
