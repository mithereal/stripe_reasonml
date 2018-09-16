open StripeElements

let component = ReasonReact.statelessComponent("Checkout");

let make = children => {
  ...component,
  render: (self) => <div>
         <label>
          Card details

          CardElement

        </label>
        </div>
  }
};