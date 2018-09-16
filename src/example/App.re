open StripeElements

let apikey = "12345"

let stripeProviderdata = Js.Dict.empty();
    Js.Dict.set(stripeProviderdata, "apiKey", apikey, CheckoutForm);

let stripe_checkout_form = ReasonReact.wrapReasonForJs(
                  ~reactClass=stripeProvider,
                   jsProps = stripeProviderdata
                   );

let component = ReasonReact.statelessComponent("Checkout");

let make = children => {
  ...component,
  render: (self) => <div>

                    stripe_checkout_form

                    </div>
  }
};