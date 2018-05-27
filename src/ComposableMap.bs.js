// Generated by BUCKLESCRIPT VERSION 3.1.4, PLEASE EDIT WITH CARE
'use strict';

var ReasonReact = require("reason-react/src/ReasonReact.js");
var ReactSimpleMaps = require("react-simple-maps");

function make(projectionConfig, width, height, style, children) {
  return ReasonReact.wrapJsForReason(ReactSimpleMaps[/* composableMap */0], {
              projectionConfig: projectionConfig,
              width: width,
              height: height,
              style: style
            }, children);
}

exports.make = make;
/* ReasonReact Not a pure module */
