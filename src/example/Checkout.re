
let injected_checkout_form = ReasonReact.wrapReasonForJs(
                  ~reactClass=elements,
                   jsProps = <CheckoutForm />
                   );

let component = ReasonReact.statelessComponent("Checkout");

let make = _children => {
  ...component,
  render: (self) =>
  <div>
injected_checkout_form
  </div>

};