[@bs.module "../node_modules/react-stripe-elements/lib/components/Provider"] external stripeProvider: ReasonReact.reactClass = "default";

[@bs.module "../node_modules/react-stripe-elements/lib/components/inject"] external injectStripe: ReasonReact.reactClass = "default";

[@bs.module "../node_modules/react-stripe-elements/lib/components/Element"] external element: ReasonReact.reactClass = "default";

[@bs.module "../node_modules/react-stripe-elements/lib/components/Elements"] external elements: ReasonReact.reactClass = "default";

[@bs.module "../node_modules/react-stripe-elements/lib/components/PaymentRequestButtonElement"] external paymentRequestButtonElement: ReasonReact.reactClass = "default";

let impliedSourceType = Js.Dict.empty();
Js.Dict.set(impliedSourceType, "impliedSourceType", "ideal");

let cardTypes = Js.Dict.empty();
Js.Dict.set(cardTypes, "impliedTokenType", "card");
Js.Dict.set(cardTypes, "impliedSourceType", "card");

let cardNumber = Js.Dict.empty();
Js.Dict.set(cardObject, "impliedTokenType", "card");
Js.Dict.set(cardObject, "impliedSourceType", "card");

let cardData =  ("card", cardObject);
let cardNumberdata = ("cardNumber", cardTypes);
let cardExpirydata = ("cardExpiry");
let carCVCdata = ("cardCvc");
let postalCodedata = ("postalCode");
let iBandata = ("iban", cardTypes);
let idealBankdata = ("idealBank", cardTypes);

let CardElement =  ReasonReact.wrapReasonForJs(
                     ~reactClass=element,
                     jsProps = cardData
                    );

let CardNumberElement =  ReasonReact.wrapReasonForJs(
                            ~reactClass=element,
                             jsProps = cardNumberdata
                             );

let CardExpiryElement = ReasonReact.wrapReasonForJs(
                           ~reactClass=element,
                            jsProps = cardExpirydata
                           );

let CardCVCElement =  ReasonReact.wrapReasonForJs(
                        ~reactClass=element,
                         jsProps = carCVCdata
                         );

let PostalCodeElement =  ReasonReact.wrapReasonForJs(
                            ~reactClass=element,
                             jsProps = postalCodedata
                             );


let IbanElement =  ReasonReact.wrapReasonForJs(
                      ~reactClass=element,
                       jsProps = iBandata
                       );

let IdealBankElement =  ReasonReact.wrapReasonForJs(
                           ~reactClass=element,
                            jsProps = idealBankdata
                            );